"""
Hacktoberfest 2020
Submission by: Liam Major / liamm91

Problem:
Given a set of integers, 
the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum.

If there is a set S with n elements, 
then if we assume Subset1 has m elements, 
Subset2 must have n-m elements and the value of abs(sum(Subset1) – sum(Subset2)) should be minimum.
"""

from typing import List

# S = [3,1,4,2,2,1]
S = [1,5,6,11]

def find_minimum(S: List) -> int:
    # initializing vars
    s1 = []
    lowest = [None, None]

    # looping through the array
    while True:
        # appending the largest number to the comparing set
        s1.append(S.pop(S.index(max(S))))

        # calculating the difference of sums
        result = abs(sum(S) - sum(s1))
        if lowest[1]:
            # if the lowest recorded value is lower than result,
            # break the loop, since the function is only going
            # to append greater values which will only make the
            # calculated result larger
            if lowest[1] < result:
                break
            else:
                # the calculated result is less than the lowest recorded
                # result, therefore record it
                lowest = [set(s1), result]
        if lowest[0] == None:
            # code to initialize the 'lowest' array
            lowest = [set(s1), result]
    
    # returning lowest result and the set
    return lowest

t = find_minimum(S)
print(t)
# assert abs(sum(subset1) - sum(subset2)) == min(S)
