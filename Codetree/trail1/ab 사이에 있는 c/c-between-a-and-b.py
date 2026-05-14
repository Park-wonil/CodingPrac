arr = list(map(int,input().split()))
cnt=0
for i in range(arr[0],arr[1]+1):
    if i%arr[2]==0:
        cnt=cnt+1
        break
if cnt>=1:
    print("YES")
else:
    print("NO")

