#include <bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>>& matrix, int n, int m, int i)
{
    for(int j = 0; j < m; j++)
    {
        if(matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}
void markCol(vector<vector<int>>& matrix, int n, int m, int j)
{
    for(int i = 0; i < n; i++)
    {
        if(matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}
// Naive: TC: O((N*M)*(N*M)+(N*M))
vector<vector<int>> zeroMatrix(vector<vector<int>>& matrix, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(matrix[i][j] == 0)
            {
                markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);

            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

//Better:
vector<vector<int>> zeroMatrix2(vector<vector<int>>& matrix, int n, int m)
{
    int row[n] = {0};
    int col[m] = {0};

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(row[i] || col[j])
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}


//Efficient:
vector<vector<int>> zeroMatrix3(vector<vector<int>>& matrix, int n, int m)
{
    int col0 = 1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            
            if(matrix[i][j] == 0)
            {
                // mark ith row
                matrix[i][0] = 0;
                // mark jth col
                if(j != 0) 
                {
                    matrix[0][j] = 0;
                }
                else col0 = 0;
            }
            
        }
    }

    // (1, 1) to (n-1, m-1) => 0
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < m; j++)
        {
            if(matrix[i][j] != 0)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
    // marking the 1st col & 1st row
    if(matrix[0][0] == 0)
        for(int j = 0; j < m; j++) matrix[0][j] = 0;
    
    if(col0 == 0)
        for(int i = 0; i < n; i++)  matrix[i][0] = 0;

    return matrix;
}
int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix3(matrix, n, m);

    cout << "The Final matrix is: \n";
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}