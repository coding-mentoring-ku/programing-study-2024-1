import random


def merge_sort(A, left, right):
    if left < right:
        mid = (left + right) // 2
        merge_sort(A, left, mid)
        merge_sort(A, mid + 1, right)
        merge(A, left, mid, right)


def merge(A, left, mid, right):
    ## Define temporary memory for data storage
    L = A[left:mid + 1]  ## save left to mid
    R = A[mid + 1:right + 1]  ## save mid+1 to right
    LenL = len(L)
    LenR = len(R)

    ## the variable for the index
    i = 0
    j = 0
    k = left

    ## Merge two array
    while i < LenL and j < LenR:
        if L[i] <= R[j]:
            A[k] = L[i]
            i += 1
        else:
            A[k] = R[j]
            j += 1
        k += 1

    ## process for the remainder
    while i < LenL:
        A[k] = L[i]
        i += 1
        k += 1

    while j < LenR:
        A[k] = R[j]
        j += 1
        k += 1


def main():
    i = 5
    while i:
        a = []
        for j in range(0, 10, 1):
            a.append(random.randrange(100))
        print("The origin array: ", a)
        merge_sort(a, 0, len(a) - 1)
        print("The sorted array: ", a)
        print("")
        i -= 1


if __name__ == '__main__':
    main()

