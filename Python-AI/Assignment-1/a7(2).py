import cmpinterest

amt = int(input("Principal Amount: "))
rate = int(input("Interest Rate: "))
time = int(input("Duration: "))

print(cmpinterest.get_CI(amt, rate, time))
