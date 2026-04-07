# brute force approach.

# def set_matrix_zero(matrix):
#     m = len(matrix)
#     n = len(matrix[0])

#     for i in range(m):
#         for j in range(n):
#             if (matrix[i][j] == 0):
#                 for col in range(n):
#                     if (matrix[i][col] != 0):
#                         matrix[i][col] = -1
#                 for row in range(m):
#                     if (matrix[row][j] != 0):
#                         matrix[row][j] = -1
#     for i in range(m):
#         for j in range(n):
#             if (matrix[i][j] == -1):
#                 matrix[i][j] = 0


# def main():
#     n, m = map(int, input().split())
#     matrix = [list(map(int, input().split())) for _ in range(n)]
#     set_matrix_zero(matrix)

#     for row in matrix:
#         print(*row)

# if __name__ == "__main__":
#     main()

def set_matrix_zero(matrix):
    n = len(matrix)
    m = len(matrix[0])

    first_col_zero = False
    first_row_zero = False

    # first I have to check if the first row and first column have any zeroes, so that I can mark them as zero later.
    for i in range(n):
        if (matrix[i][0] == 0):
            first_col_zero = True
    
    for j in range(m):
        if (matrix[0][j] == 0):
            first_row_zero = True
    
    # mark the first row cell and first row column when matrix[i][j] == 0
    for i in range(1, n):
        for j in range(1, m):
            if (matrix[i][j] == 0):
                matrix[0][j] = 0
                matrix[i][0] = 0
    
    # now we can mark the cells whose either first row or first column is zero
    for i in range(1, n):
        for j in range(1, m):
            if(matrix[i][0] == 0 or matrix[0][j] == 0):
                matrix[i][j] = 0
    
    # now check if the first_row_zero and first_column_zero needs to be fully zero or not
    if (first_col_zero == True):
        for i in range(n):
            matrix[i][0] = 0
    
    if (first_row_zero == True):
        for j in range(m):
            matrix[0][j] = 0

def main():
    n, m = map(int, input().split())
    matrix = [list(map(int, input().split())) for _ in range(n)]
    set_matrix_zero(matrix)

    for row in matrix:
        print(*row)

if __name__ == "__main__":
    main()