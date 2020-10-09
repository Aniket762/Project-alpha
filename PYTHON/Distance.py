def dist(n):

# Base conditions
    if (n == 0):
        return 1
    if (n <= 2):
        return n

# Last stages
    s0 = 1
    s1 = 1
    s2 = 2
    sol = 0

# Find the numbers of steps
    for i in range(3, n + 1):
        sol = s0 + s1 + s2
        s0 = s1
        s1 = s2
        s2 = sol

    # Return the required answer
    return sol

# Driver code
n = 4

print(dist(n)) 
