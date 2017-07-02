#!/usr/bin/python

def kthElem(arr1, arr2, k):
    if k == 0:
        return min(arr1[0], arr2[0])

    size1 = len(arr1)
    size2 = len(arr2)

    if size1 == 0:
        return arr2[k]
    if size2 == 0:
        return arr1[k]

    mid1 = size1/2
    mid2 = size2/2

    print k
    print arr1
    print arr2
    
    if arr1[mid1] > arr2[mid2]:
        # get rid of smaller half
        if mid1 > k:
            return kthElem(arr1, arr2[mid2+1:], k - mid2)
        # get rid of bigger half
        else:
            return kthElem(arr1[:mid1], arr2, k - size1 + mid1)
    # arr1[mid1] <= arr2[mid2]
    else: 
        if arr1[mid1] > arr2[mid2]:
            return kthElem(arr1[:mid1], arr2, k)
        else:
            return kthElem(arr1, arr2[:mid2], k)

a1 = [2,3,6,7,9]
a2 = [1,4,8,10]

# 1 2 3 4 6 7 8 9 10

print kthElem(a1, a2, 7)
