def maxSubArray(nums):
    maxx = float('-inf')
    for i in range(len(nums)):
        for j in range(i, len(nums)):
            sum = 0  # curr sum
            for k in range(i, j+1):
                sum + nums[k]
            maxx = max(maxx, sum)
    return maxx

#better
def maxSubArray2(nums):
    maxx = float('-inf')
    for i in range(len(nums)):
        sum = 0
        for j in range(i, len(nums)):
            sum += nums[j]
        maxx = max(maxx, sum)
    return maxx            

#optimal
def maxSubArray3(nums):
    maxi = float('-inf')
    sum = 0
    
    s = 0
    l = r = -1
    for i in range(len(nums)):
        if sum == 0: start = i
        sum += nums[i]
        if sum > maxi:
            maxi = sum
            l = start
            r = i
        if sum < 0:
            sum = 0
    return [f"max subarray sum = {maxi}", {l, r}]


nums = [-2,1,-3,4,-1,2,1,-5,4]

print(maxSubArray3(nums))