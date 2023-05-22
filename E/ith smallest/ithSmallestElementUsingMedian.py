
# Python3 implementation of worst case 
# linear time algorithm to find
# k'th smallest element
 
# Returns k'th smallest element in arr[l..r]
# in worst case linear time.
# ASSUMPTION: ALL ELEMENTS IN ARR[] ARE DISTINCT

# A simple function to find
# median of arr[] from index l to l+n
def findMedian(A, l, N):                    # n log(n)
    list1 = []
    for k in range(l, l + N):               # n
        list1.append(A[k])     
    # Sort the array
    list1.sort()                            # n log(n)
    # Return the middle element
    return list1[N // 2]

def Select(A, l, u, i):
    # If k is smaller than number of
    # elements in array
    if (i > 0 and i <= u - l + 1):
        # Number of elements in arr[l..r]
        N = u - l + 1
        # Divide arr[] in groups of size 5,
        # calculate median of every group
        # and store it in median[] array.
        median = []
        k= 0
        while (k< N // 5):
            median.append(findMedian(A, l + k* 5, 5))
            k+= 1
        # For last group with less than 5 elements
        if (k* 5 < N):
            median.append(findMedian(A, l + k* 5, N % 5))
            k+= 1
        # Find median of all medians using recursive call.
        # If median[] has only one element, then no need
        # of recursive call
        if k== 1:
            median_of_median = median[k- 1]
        else:
            median_of_median = Select(median, 0, k- 1, k// 2)
        # Partition the array around a medOfMed
        # element and get position of pivot
        # element in sorted array
        r = partition(A, l, u, median_of_median)

        # If position is same as k
        if (r - l == i - 1):
            return A[r]                                                                       ## 1
        if (r - l > i - 1): # If position is more,
                              # recur for left subarray
            return Select(A, l, r - 1, i)                                                     ## n 
        # Else recur for right subarray
        return Select(A, r + 1, u, i - r + l - 1)
    # If k is more than the number of
    # elements in the array
    return 0
 
def swap(A, a, b):
    temp = A[a]
    A[a] = A[b]
    A[b] = temp
# It searches for x in arr[l..r], 
# and partitions the array around x.
def partition(A, l, u, x):                                              ## n
    for k in range(l, u):                                           
        if A[k] == x:
            swap(A, u ,k)
            break
 
    x = A[u]
    k= l
    for j in range(l, u):
        if (A[j] <= x):
            swap(A, k, j)
            k+= 1
    swap(A, k, u)
    return k
 
# Driver Code
if __name__ == '__main__':
 
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