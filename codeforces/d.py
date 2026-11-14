from collections import Counter
n = int(input())
s = str(input())
c = Counter(s)
t = ""
max_val = 0
max_key = "_"
for key, val in c.items():
    if val >= max_val:
        max_key = key
        max_val = val

for i in range(n):
    if s[i] == "?" and c["?"] > 0:
        flag = False
        for op in c.keys():
            if c[op] < max_val:
                t += op; 
                c[op] += 1
                flag = True 
                break
        if not flag: 
            t += s[i]
                
    else: 
        t += s[i]
        
if "?" in t: 
    print("===")
else: 
    print(t)
                
    

