n = int(input("Enter number: "))

a = 0
b = 1

while b < n:
    c = a + b
    a = b
    b = c

if b == n or n == 0:
    print("Fibonacci number")
else:
    print("Not a Fibonacci number")
