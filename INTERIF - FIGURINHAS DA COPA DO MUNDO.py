N, X, Y = input().split(" ")
N = int(N)
X = int(X)
Y = int(Y)

arrX = []
aur = 0
arrY = []
bre = 0

for i in range(X):
    aur = input()
    arrX.append(aur)
for i in range(Y):
    bre = input()
    arrY.append(bre)

for i in arrX:
    for j in arrX:
        if i == j:
            print(j)

print(arrX)
print(arrY)
repX = []
noRepX = []
repY = []
noRepY = []

for elements in arrX:
    if elements not in noRepX:
        noRepX.append(elements)
    else:
        repX.append(elements)
for elements in arrY:
    if elements not in noRepY:
        noRepY.append(elements)
    else:
        repY.append(elements)

for i in range(len(repX)):
    arrY.append(repX[i])
print(arrY)
for i in range(len(repY)):
    arrX.append(repY[i])
print(arrX)