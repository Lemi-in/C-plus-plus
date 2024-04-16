n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
 
count = 0
result = []
 
for num in b:
    while count < n and a[count] < num:
        count += 1
    result.append(count)
 
print(*result)