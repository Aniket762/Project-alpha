r = int(input("Enter number of Rows"))
c = int(input("Enter number of Columns"))
 
#transpose function
def transpose(A,B): 
    for i in range(c): 
        for j in range(r): 
            B[i][j] = A[j][i] 

#original matrix
A = []
for i in range(r):          
    a =[] 
    for j in range(c):     
         a.append(int(input())) 
    A.append(a)

print("Original Matrix A :-")
for i in range(r): 
    for j in range(c): 
        print(A[i][j], end='  ') 
    print()  

# Creating B matrix
B = [[0 for x in range(r)] for y in range(c)]  
  
transpose(A,B)  # B = A(transpose)
  
print("\nResult matrix B :-") 
for i in range(c): 
    for j in range(r): 
        print(B[i][j], end='  ') 
    print()  
    
""" Exapmle Run :

    Enter number of Rows 2
    Enter number of Columns 5
     1
     2
     3
     4
     5
     6
     7
     8
     9
     10
    Original Matrix A :-
    1  2  3  4  5  
    6  7  8  9  10  

    Result matrix B :-
    1  6  
    2  7  
    3  8  
    4  9  
    5  10
"""
