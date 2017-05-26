#!/usr/bin/python

def kthElem(arr1, arr2, k):
    print arr1, arr2
    if len(arr1) + len(arr2) < k:
        return
    if len(arr1) == 0: 
        return arr2[k]
    if len(arr2) == 0:
        return arr1[k]

    mid1 = len(arr1)/2
    mid2 = len(arr2)/2

#    if arr1[0] > arr2[len(arr2) - 1]:
#        if k < len(arr2) :
#            return arr2[k]
#        else:
#            return arr1[k-len(arr2) - 1]
#    elif arr1[len(arr1) - 1] < arr2[0]:
#        if k < len(arr1) :
#            return arr1[k]
#        else:
#            return arr2[k-len(arr1) - 1]

    if mid1 + mid2 > k:
        kthElem(arr1[mid1+1:len(arr1)], arr2[mid2+1:len(arr2)], k - mid1 - mid2)
    else: 
        kthElem(arr1[0:mid1], arr2[0:mid2], k)

a1 = [2,3,6,7,9]
a2 = [1,4,8,10]

print kthElem(a1, a2, 5)
