#!/usr/bin/python

# Given a list of distinct integers a[1...n], an inversion is a pair of elements 
#   a[i], a[j] such that a[i] > a[j] and i < j.
# Example: the list [41, 72, 3, 74, 31] has 5 inversions, namely (41, 3),
#   (41, 31),(72, 3),(72, 31),(74, 31).
# Design a O(n log n) divide and conquer algorithm to count the number of 
# inversions of a list of length n with distinct integers.
# (Hint: alter mergesort and keep count of the inversions during the merge part.) 
# (No justification for correctness needed. Please give a justification of the runtime.)

def countInversions(arr1, arr2):
    inversion = 0
    while not arr1 and not arr2:
        if arr1[0] > arr2[0]:
            inversion += len[arr1]
            arr2 = arr2[1:]
        else:
            arr1 = arr1[1:]
    return inversion

def getInversions(arr):
    if len(arr) == 1:
        return 0
    mid = len(arr)/2
    arr1 = getInversions(arr[:mid])
    arr2 = getInversions(arr[mid+1:])

def merge(arr1, arr2):
    res = []
    while not arr1 and not arr2:
        if arr1[0] > arr2[0]:
            res.append(arr2[0])
            arr2 = arr2[1:]
        else:
            res.append(arr1[0])
            arr1 = arr1[1:]

    if not arr2:
        res.extend(arr1)
    else:
        res.extend(arr2)

    return res

def mergeSort(arr):
    if len(arr) <= 1:
        return arr
    mid = len(arr)/2
    arr1 = mergeSort(arr[:mid])
    arr2 = mergeSort(arr[mid+1:])
    return merge(arr1, arr2)

arr = [4,6, 2,8, 9, 3, 6, 8, 4, 2,24, 5,78,3]
print mergeSort(arr)
