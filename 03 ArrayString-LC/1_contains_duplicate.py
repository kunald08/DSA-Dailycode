# using sorting -> TC: O(NlogN) SC: O(1)
def hasDuplicate(nums):
    nums.sort()
    for i in range(1, len(nums)):
        if nums[i] == nums[i-1]:
            return True
    return False

# Hashset -> TC: O(N) SC: O(N)
def hasDuplicate2(nums):
    seen = set()
    for n in nums:
        if n in seen:
            return True
        seen.add(n)
    return False

