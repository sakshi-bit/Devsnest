n=int(input())
bucket={}
for i in range(n):
    occ=input()
    if occ in bucket:
        bucket[occ]+=1
    else:
        bucket[occ]=1
print(len(bucket))
for i in bucket:
    print(bucket[i],end=" ")
