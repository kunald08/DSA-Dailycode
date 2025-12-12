# find the duplicate by sorting and checking adjacent ele
def find_duplicate(nums):
    nums.sort()
    for i in range(1, len(nums)):
        if nums[i] == nums[i-1]:
            return nums[i]
    return -1

#using a frequency array
def find_duplicate2(nums):
    n = len(nums)
    freq = [0]*(n+1)
    for n in nums:
        if freq[n] == 0:
            freq[n] += 1
        else:
            return n
    return -1

# 2loops
def find_duplicate3(nums):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] == nums[j]:
                return nums[i]
    return -1
    
# hashset
def find_duplicate4(nums):
    seen = set()
    for n in nums:
        if n in seen:
            return n
        seen.add(n)
    return -1

# Marking visited value within the array
def find_duplicate5(nums):
    for n in nums:
        idx = abs(n)
        if nums[idx] < 0:
            return idx
        nums[idx] = -nums[idx]
    return -1 #fallback

    
#Driver code
nums = [1, 3, 4, 2, 2]
print(find_duplicate(nums))
print(find_duplicate2(nums))
print(find_duplicate3(nums))
# print(find_duplicate4(nums))
# print(find_duplicate(nums))