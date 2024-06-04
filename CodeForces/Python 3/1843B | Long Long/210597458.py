for s in[*open(0)][2::2]:
 t=r=0;d=1
 for x in map(int,s.split()):
  if x<0:t-=x;r+=d;d=0
  if x>0:t+=x;d=1
 print(t,r)