class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        output = []
        nums.sort()
        
        for i,a in enumerate(nums):
            if i>0 and a == nums[i-1]:
                continue
            left = i+1
            right = len(nums)-1
            
            while left < right:
                threeSum = nums[i]+nums[left]+nums[right]
                if threeSum < 0:
                    left +=1
                elif threeSum > 0:
                    right -=1
                else:
                    output.append([nums[i],nums[left],nums[right]])
                    left +=1
                    while nums[left] == nums[left-1] and left < right:
                        left +=1
        return output
                