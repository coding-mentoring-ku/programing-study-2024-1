# 피보나치 수열 출력하기
def ol():
    n = 2
    print('1')

    def koo():
        print('2')
    koo()


def fib(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib(n-1) + fib(n-2)


def problem10870():
    n = int(input())
    result = fib(n)
    print(result)


problem10870()




