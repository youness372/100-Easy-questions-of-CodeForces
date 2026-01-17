import sys
 
input_data = sys.stdin.read().split()
if not input_data:
    exit()
 
n = int(input_data[0])
camels = []
 
idx = 1
for i in range(n):
    x = int(input_data[idx])
    d = int(input_data[idx + 1])
    camels.append((x, d))
    idx += 2
 
found = False
for i in range(n):
    x1, d1 = camels[i]
    target1 = x1 + d1
    
    for j in range(n):
        if i == j:
            continue
            
        x2, d2 = camels[j]
        target2 = x2 + d2
        
        if target1 == x2 and target2 == x1:
            found = True
            break
    if found:
        break
 
if found:
    print("YES")
else:
    print("NO")
