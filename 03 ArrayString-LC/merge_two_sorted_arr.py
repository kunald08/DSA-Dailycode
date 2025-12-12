def merge(nums1, m, nums2, n):
    res = []
    i = j = 0
    while i < m and j < n:
        if nums1[i] < nums2[j]:
            res.append(nums1[i])
            i += 1
        else:
            res.append(nums2[j])
            j += 1
        
    while i < m:
        res.append(nums1[i])
        i += 1
    while j < n:
        res.append(nums2[j])
        j += 1
    
    print(res)


## two pointer

# Initializes pointers i, j, k.
# Compares from the end of nums1 and nums2.
# Always places the larger element at the end.
# Ensures in-place merging without extra memory.
# Handles leftover elements correctly.
def merge2(nums1, m, nums2, n):
    i = m-1
    j = n-1
    k = m+n-1
    
    while j >= 0:
        if i >= 0 and nums1[i] > nums2[j]:
            nums1[k] = nums1[i]
            i -= 1
        else:
            nums1[k] = nums2[j]
            j -= 1
        k -= 1
    print(nums1)

nums1 = [1,2,3,0,0,0] 
m = 3
nums2 = [2,5,6]
n = 3
merge(nums1, m, nums2, n)
merge2(nums1, m, nums2, n)