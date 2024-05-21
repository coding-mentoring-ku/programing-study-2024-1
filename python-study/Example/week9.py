import week8
import week4

print(__name__)
print(week8.__name__)
print(week4.__name__)

my_account = week8.Account(12345678, 'Yoon', 1000)

my_account.deposit(500)
my_account.withdraw(500)

