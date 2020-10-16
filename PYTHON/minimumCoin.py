'''
Given
- list C = [c1,c2, .... cn] of different denomination of coin
- integer M of target value

The function returns the number of mininum coins needed to fulfil the request.
'''


def coinExchange(c, m):
    coins_list = []     # Output list used to store the value of selected coins
    index = len(c)

    c.sort() # Sort values of list C in ascending order

    while(index):
        future_sum = sum(coins_list) + c[index - 1]     # Calculate the sum of the values of already selected coins plus the value that going to be added

        if (m > c[index - 1]) and (future_sum <= m):
            coins_list.append(c[index - 1])
        else:
            index -= 1

    return len(coins_list)


if __name__ == "__main__":
    input_list = []
    n = int(input("Enter number of elements, thus enter coin values one by one : "))

    for i in range(0, n):
        ele = int(input())

        input_list.append(ele)
    m = int(input("Enter M: "))

    print("Minimum coins required is ", coinExchange(input_list, m))
