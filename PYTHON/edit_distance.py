import sys


def edit_distance(str1, str2):
    if len(str1) > len(str2):
        str1, str2 = str2, str1

    distances = range(len(str1) + 1)

    for count1, letter1 in enumerate(str2):
        distances_ = [count1+1]
        
        for count2, letter2 in enumerate(str1):
            if letter2 == letter1:
                distances_.append(distances[count2])
            else:
                distances_.append(1 + min((distances[count2], distances[count2 + 1], distances_[-1])))
    
        distances = distances_

    cost = distances[-1]
    return cost


if __name__ == "__main__":
    if len(sys.argv) == 3:
        str1 = sys.argv[1]
        str2 = sys.argv[2]
    else:
        str1 = "Cat"
        str2 = "Rats"
    
    no_operations = edit_distance(str1, str2)
    print(f"Levenshtein distance between < {str1} > and < {str2} >")
    print(f"Number of operations required : {no_operations}")
