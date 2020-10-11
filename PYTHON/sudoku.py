# Given a 9*9 sudoku board, in which some entries are filled and others are 0 (0 indicates that the cell is empty),found out whether the Sudoku puzzle can be solved or not i.e. return true or false.

# Input Format :
# 9 Lines where ith line contains ith row elements separated by space

# Output Format :
#  true or false


def isBoxSafe(row, col, num, board):
    rowstart = row - row%3
    colstart = col - col%3
    for i in range(rowstart, rowstart+3):
        for j in range(colstart, colstart+3):
            if board[i][j] == num:
                return False
    return True

def isColSafe(col, num, board):
    for i in range(8):
        if board[i][col] == num:
            return False
    return True

def isRowSafe(row, num, board):
    for i in range(8):
        if board[row][i] == num:
            return False
    return True

def canPlaceNum(row, col, num, board):
    if not isRowSafe(row, num, board):
        return False
    if not isColSafe(col, num, board):
        return False
    if not isBoxSafe(row, col, num, board):
        return False
    return True

def solveSudoku(board):
    row, col = -1, -1
    isEmpty = False
    for i in range(9):
        for j in range(9):
            if board[i][j] == 0:
                row = i
                col = j
                isEmpty = True
                break
        if isEmpty:
            break
    if row == -1:
        return True
    for num in range(1, 10):
        if canPlaceNum(row, col, num, board):
            board[row][col] = num
            if(solveSudoku(board)):
                return True
            else:
                board[row][col] = 0
    return False
i=0
print('Enter 9 Lines where ith line contains ith row elements separated by space')
board = [[ int(ele) for ele in input().split() ]for i in range(9)]
ans = solveSudoku(board)
if ans is True:
    print('Sudoku can be solved')
else:
    print('Sudoku cannot be solved')