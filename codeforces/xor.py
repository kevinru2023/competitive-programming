a = int(input("number: "))

for b in range(1,a):
    c = a ^ b
    if a + b > c and a + c > b and b + c > a:
        print("value: ",b)
