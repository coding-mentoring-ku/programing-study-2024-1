"""
사각형 클래스를 정의하고, 가로와 세로 길이를 속성으로 갖습니다.
사각형의 넓이를 계산하는 메서드를 포함해야 합니다.
"""

"""
class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def calculate_area(self):
        return self.width * self.height


rect = Rectangle(5, 5)
print("넓이:", rect.calculate_area())
"""


"""은행 계좌 관리 시스템
Account 객체, SavingsAccount 객체, CurrentAccount 객체
Account 객체 = account_number, account_holder(예금주), balance(잔액)
    deposit(amount) -> amount 입금
    withdraw(amount) -> amount 출금, balance < amount 출금 실패
    
SavingsAccount = Account 상속받음
    = interest_rate (이자율) -> 이자율에 따라 매월 잔액이 증가해야 함

CurrentAccount = Account 상속받음
    = overdraft_limit(대출 한도) -> balance == 0 이어도 대출한도만큼 빌릴 수 있다. 
"""


class Account:
    def __init__(self, account_number, account_holder, balance):
        self.account_number = account_number
        self.account_holder = account_holder
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        print(f"{amount}원이 입금되었습니다. 현재 잔액은 {self.balance}원")

    def withdraw(self, amount):
        if self.balance >= amount:
            self.balance -= amount
            print(f"{amount}원이 출금되었습니다. 현재 잔액은 {self.balance}원")
        else:
            print(f"잔액이 부족합니다. 출금이 취소됩니다.")


class SavingsAccount(Account):
    def __init__(self, account_number, account_holder, balance, interest_rate):
        super().__init__(account_number, account_holder, balance)
        self.interest_rate = interest_rate

    def add_interest(self):
        interest = self.balance * self.interest_rate
        self.balance += interest
        print(f"이자 {interest}원이 추가되었습니다. 현재 잔액은 {self.balance}원")



class CurrentAccount(Account):
    def __init__(self, account_number, account_holder, balance, overdraft_limit):
        super().__init__(account_number, account_holder, balance)
        self.overdraft_limit = overdraft_limit


    def withdraw(self, amount):
        if self.balance >= amount or (self.balance >= 0 and amount <= self.overdraft_limit):
            self.balance -= amount
            print(f"{amount}원이 출금되었습니다. 현재 잔액: {self.balance}원")
        else:
            print("잔액이 부족합니다. 대출한도를 초과하여 출금이 취소됩니다.")


if __name__ == '__main__':
    saving = SavingsAccount("123456", "Yoon", 1000, 0.05)
    saving.deposit(500)
    saving.add_interest()
    saving.withdraw(1500)

    current = CurrentAccount("23456", "Yoon", 1000, 500)
    current.withdraw(1000)
    current.withdraw(500)
    current.withdraw(500)
