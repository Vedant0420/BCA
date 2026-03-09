#accept withdrawl amt as input from user
#a.if amount is <=0 print error message
#b amount must be multiple of 100
#c. Amount cant be withdrawn if the amount is greatar than balance
#d . Display balance after withdrawl

balance = 10000
amt = int(input("Enter withdrawal amount: "))

if amt <= 0:
    print("Invalid amount")
elif amt % 100 != 0:
    print("Withdrawal amount must be a multiple of 100")
elif amt > balance:
    print("Insufficient balance")
else:
    balance -= amt
    print("Withdrawal successful. Remaining balance:", balance)