X = {1, 2, 3, 4, 5, 6}
Y = {1, 2, 3, 4, 5, 6, 7}
Z = {1, 2, 3, 4, 5, 6, 7, 8}

count = 0
for x in X:
    for y in Y:
        for z in Z:
            if x + y + z == 18:
                print(x,y,z)
                count += 1

print("Number of elements satisfying the condition:", count)
