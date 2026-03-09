p = float(input("Enter principal: "))
t = float(input("Enter time (years): "))

if t <= 1:
    r = 5
elif t <= 3:
    r = 7
else:
    r = 10

si = (p * r * t) / 100
print("Simple Interest =", si)
