a,b=input().split()
a=int(a)
b=int(b)
cnt=0
while(1):
    a*=3
    b*=2
    cnt+=1
    if a>b:
        break
print(int(cnt))
    