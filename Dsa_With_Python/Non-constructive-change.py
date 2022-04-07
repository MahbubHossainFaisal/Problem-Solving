def notChangable(array):
    array.sort()
    change = 0;
    for element in array:
        
        if element <= change + 1:
            change += element
        else:
            return change+1
    return 0


array = [5,7,1,1,2,3,22]

answer = notChangable(array)

print(answer)
