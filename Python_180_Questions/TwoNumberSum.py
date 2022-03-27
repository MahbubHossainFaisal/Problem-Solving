def twoNumSum(arr, targetSum):
    arr.sort()
    left = 0
    right = len(arr) - 1
    while left < right:
        currentSum = arr[left] + arr[right]
        if(currentSum == targetSum):
            return [arr[left], arr[right]]
        elif(currentSum < targetSum):
            left = left + 1
        elif(currentSum > targetSum):
            right = right - 1
    
    return []



arr = [-4,-1,1,3,5,6,8,11]
targetSum = 13

ans = twoNumSum(arr,targetSum)
print(ans)
