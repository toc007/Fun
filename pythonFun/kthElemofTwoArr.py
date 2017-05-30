#!/usr/bin/python

def kthElem(arr1, arr2, k):
    if len(arr1) + len(arr2) >= k:
        print "k value is too big!!"
        return -1
    if k == 0:
        return min(arr1[0], arr2[0])
    if len(arr1) == 0:
        return arr2[k]
    if len(arr2) == 0:
        return arr1[k]

    mid1 = len(arr1)/2
    mid2 = len(arr2)/2

    if mid1 + mid2 > k:
        if arr1[mid1] > arr2[mid2]:
            return kthElem(arr1, arr2[mid2+1:], k - mid2)
        else:
            return kthElem(arr1[mid1+1:], arr2, k - mid1)
    else: 
        if arr1[mid1] > arr2[mid2]:
            return kthElem(arr1[:mid1], arr2, k)
        else:
            return kthElem(arr1, arr2[:mid2], k)

a1 = [2,3,6,7,9]
a2 = [1,4,8,10]

# 1 2 3 4 6 7 8 9 10

print kthElem(a1, a2, 7)
