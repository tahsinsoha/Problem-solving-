n,k=input().split()
cnt=0
n=int(n)
k=int(k)
while n>0:
    if n%10>0:
        n=n-1
        cnt=cnt+1
    else:
        n/=10
        cnt=cnt+1
    if cnt==k:
        break
    

print(int(n))





