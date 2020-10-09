#Given a set of integers, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum.
#If there is a set S with n elements, then if we assume Subset1 has m elements, Subset2 must have n-m elements and the value of abs(sum(Subset1) – sum(Subset2))


def findMinRecursive(arr, i, sumCalculated, sumTotal):
        #For last element, return absolute difference of two sums
        #The sum of 2nd subset is calculatedd as difference between two sums
        if (i == 0):
            return abs((sumTotal-sumCalculated) - sumCalculated)

        #Recursively iterate through all possible subsets
        #Return minimum subset
        arr = list(arr)
        return min(findMinRecursive(arr, i - 1, sumCalculated + arr[i-1], sumTotal),
                   findMinRecursive(arr, i - 1, sumCalculated, sumTotal));

#Return minimum possible difference between sums of two subsets 
def findMin(arr, n): 
    sumTotal = sum(arr)
    #Recursively  iterate through all possible subsets 
    return findMinRecursive(arr, n, 0, sumTotal);  

#Test the code
arr = [20, 30, 45, 50]
n = len(arr)
print(findMin(arr, n))
