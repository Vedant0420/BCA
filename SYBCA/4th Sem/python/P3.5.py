n = int(input("Enter n: "))
sum = 0

for i in range(1, n + 1):
    if i % 2 == 0:
        continue
    sum += i ** 3

print("Cube sum (odd only) =", sum)
