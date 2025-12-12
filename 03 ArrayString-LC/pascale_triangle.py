def pascal_triangle(n):
    triangle = []
    
    for i in range(n):
        row = [1]*(i+1)
        for j in range(1, i):
            row[j] = triangle[i-1][j-1]+triangle[i-1][j]
            
        triangle.append(row)
    return triangle

# function to compute binomial coefficient (nCr)
def findPascalEle(r, c):
    n = r-1
    r = c-1
    
    res = 1
    for i in range(r):
        res *= (n-i)
        res //= (i+1)
    return res
        
# Function to generate the Nth row of Pascal's Triangle
def getNthRow(n):
    row = []
    val = 1
    row.append(val)
    for k in range(1, n):
        val = val*(n-k)//k
        row.append(val)
    return row