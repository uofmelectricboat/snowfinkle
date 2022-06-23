ALTITUDE=0

I={}

--Last Measurements
lr=0
lp=0
la=0

function Update(Iarg)
  I=Iarg
  -- measurements
  p = angNorm(I:GetConstructPitch()) - 0
  a = ALTITUDE - I:GetConstructPosition().y
  r = angNorm(I:GetConstructRoll())

  -- control factors
  pf = Pd(p, lp, 2, 20)
  af = Pd(a, la, 2, 20)
  rf = Pd(r, lr, 2, 20)

  -- mark last measurements
  lp = p
  la = a
  lr = r

  number_of_foils = I:Component_GetCount(8)
  for fi=0,number_of_foils-1 do
    f=I:Component_GetBlockInfo(8,fi)
    fl=f.LocalPositionRelativeToCom
    roll=0
    pitch=0
    water_flow=0
    if fl.x < 0 then roll = 1 end
    if fl.x > 0 then roll = -1 end
    if fl.z < 0 then pitch = -1 end
    if fl.z > 0 then pitch = 1 end
    if I:GetForwardsVelocityMagnitude() > 0.2 then 
      water_flow = 1 
    elseif I:GetForwardsVelocityMagnitude() < -0.2 then
      water_flow = -1 
    end
    I:Component_SetFloatLogic(8,fi, water_flow*(af + pf * pitch + rf * roll))
  end
end

-- Basic functions
function Pd(p, lp, pf, df)
  d = p - lp
  p = p * pf
  d = d * df
  f = p + d
  return f
end

function angNorm(a)
  if a > 180 then a = a - 360 end
  return a 
end