import itertools as it

def bubblesort(arr):
    for i in range(len(arr)):
        ind = 0
        for j in range(1, len(arr) - i):
            if (arr[ind] >= arr[j]):
                arr[j], arr[ind] = arr[ind], arr[j]
            ind = j
    return arr

if __name__ == "__main__":
    A = [1, 2, 3, 4, 5]
    perm = list(it.permutations(A))
    result = True
    for i in range(len(perm)):
        sorted = bubblesort(list(perm[i]))
        if(A != sorted):
            result = False
            break

    if result:
        print("Sorting successful")
    else:
        print("Error at sorting", sorted, perm[i])