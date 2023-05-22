def Select(A, l, u, i):                                     ## O(n)
        
        # Partition the array around last
        # element and get position of pivot
        # element in sorted array
        
        r = partition(A, l, u)                                          ##O(n)

        if (r - l == i - 1): # If position is same as k                                           ##O(1)
            return A[r]
        if (r - l > i - 1):            # If position is more,
                              # recur for left subarray                                 ##O(n)
            return Select(A, l, r - 1, i)
        # Else recur for right subarray
        return Select(A, r + 1, u, i - r + l - 1)                       ##O(n)
 
# Standard partition process of QuickSort().
# It considers the last element as pivot and
# moves all smaller element to left of it
# and greater elements to right

def partition(A, l, u):                                                 ##O(n)    
    y = A[u]
    x = l
    for j in range(l, u):                                               ##O(n)
        if (A[j] <= y):
            A[x], A[j] = A[j], A[x]
            x += 1
    A[x], A[u] = A[u], A[x]
    return x
 

# Driver's Code
if __name__ == "__main__":
    A = [12, 3, 5, 7, 4, 19, 26]
    N = len(A)
    i = 4

    print("############################")
    print("Unsorted array is : ", A)
    print("############################")
    print("i is : ",i)
    print("############################")
    print("i'th smallest element is", Select(A, 0, N - 1, i))
    print("############################")
