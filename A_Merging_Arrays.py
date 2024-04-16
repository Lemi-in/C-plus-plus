n, m = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
arr3 = []
i = j = 0
while i < n and j < m:
    if arr1[i] <= arr2[j]:
        arr3.append(arr1[i])
        i += 1
    else:
        arr3.append(arr2[j])
        j += 1
while i < n:
    arr3.append(arr1[i])
    i += 1
while j < m:
    arr3.append(arr2[j])
    j += 1
print(*arr3)
