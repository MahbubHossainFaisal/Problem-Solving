class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        output = [0 for _ in nums]
        start = 0
        end = len(nums) - 1
        pointer = len(nums) - 1
        
        while start<=end:
            if abs(nums[start]) > abs(nums[end]):
                output[pointer] = nums[start] * nums[start]
                start +=1
                pointer -= 1
            else:
                output[pointer] = nums[end] * nums[end]
                end -= 1
                pointer -=1
        
        return output