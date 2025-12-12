# set matrix zeros

# BF--> TC: O(m*n*(m+n)) | SC: O(1)
def set_zeros(matrix):
    m = len(matrix) #rows
    n = len(matrix[0]) #cols

    # mark rows and cols ->> -1
    for i in range(m):
        for j in range(n):
            # check for zero
            if matrix[i][j] == 0:
                # mark entire row
                for c in range(n):
                    if matrix[i][c] != 0:
                        matrix[i][c] = -1
                # mark entire col
                for r in range(m):
                    if matrix[r][j] != 0:
                        matrix[r][j] = -1
    
    # replace -1 ->> 0
    for i in range(m):
        for j in range(n):
            if matrix[i][j] == -1:
                matrix[i][j] = 0

# Better--> TC:O(m*n) | SC: O(m+n)
def set_zeros2(matrix):
    m = len(matrix) # rows
    n = len(matrix[0]) # cols
    
    # marker arrays -> for rows and cols
    row = [0]*m  
    col = [0]*n
    
    # mark row and col that need to be zeros 
    for i in range(m):
        for j in range(n):
            if matrix[i][j] == 0:
                row[i] = 1
                col[j] = 1
                
    # set zero based on marker arrays       
    for i in range(m):
        for j in range(n):
            if row[i] == 1 or col[j] == 1:
                matrix[i][j] = 0  
                
# Optimal:
def setZeroes3(self, matrix):
    m = len(matrix)  #row
    n = len(matrix[0]) #cols

    # Check if first row has any zero
    first_row_zero = False
    for j in range(n):
        if matrix[0][j] == 0:
            first_row_zero = True
            break

    # Check if first column has any zero
    first_col_zero = False
    for i in range(m):
        if matrix[i][0] == 0:
            first_col_zero = True
            break

    # Use first row/column as markers
    for i in range(1, m):
        for j in range(1, n):
            if matrix[i][j] == 0:
                matrix[i][0] = 0  #first col
                matrix[0][j] = 0  #first row

    # Set cells to zero based on markers
    for i in range(1, m):
        for j in range(1, n):
            if matrix[i][0] == 0 or matrix[0][j] == 0:
                matrix[i][j] = 0

    # Zero the first row if needed
    if first_row_zero:
        for j in range(n):
            matrix[0][j] = 0

    # Zero the first column if needed
    if first_col_zero:
        for i in range(m):
            matrix[i][0] = 0
            
                
                
                
# Driver Code
matrix = [[1,1,1],[1,0,1],[1,1,1]]
set_zeros2(matrix)

for r in matrix:
    print(r)
                