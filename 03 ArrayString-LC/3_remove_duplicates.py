# we can put elements of nums in set as well to remove duplicate but question clearly saying in-palce

def removeDuplicates(self, nums):
    i = 0
    for j in range(1, len(nums)):
        if nums[i] != nums[j]:
            nums[i+1] = nums[j]
            i += 1
    return i+1


nums = [0,0,1,1,1,2,2,3,3,4]
# nums = [0,1,2,3,4,_,_,_,_,_]