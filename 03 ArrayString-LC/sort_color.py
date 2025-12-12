# better
def sortColor(nums):
    cnt0 = cnt1 = cnt2 = 0
    
    for i in range(len(nums)):
        if nums[i] == 0: cnt0 += 1
        elif nums[i] == 1: cnt1 += 1
        else: cnt2 += 1
    
    # replace the original arr
    for i in range(cnt0): nums[i] = 0
    for i in range(cnt0, cnt0+cnt1): nums[i] = 1
    for i in range(cnt0+cnt1, len(nums)): nums[i] = 2

# optimal  
def sortColor2(nums):
    l = 0
    m = 0
    h = len(nums)-1
    while(m <= h):
        if nums[m] == 0:
            nums[l], nums[m] = nums[m], nums[l]
            l += 1
            m += 1
        elif nums[m] == 1:
            m += 1
        else:
            nums[m], nums[h] = nums[h], nums[m]
            h -= 1
            
               
    


# Driver code
nums = [0, 2, 1, 2, 0, 1]
sortColor(nums)
print(nums)