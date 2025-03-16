#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    void rotateMatrixBy90(vector<vector<int>> &mat, int row, int col)
    {
        // write your code here

        cout << "Transposed Matrix:\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = i + 1; j < col; j++)
            {
                swap(mat[i][j], mat[j][i]);
            }
        }

        for (int i = 0; i < row; i++)
        {
            int l = 0, r = col - 1;
            while (l < r)
            {
                swap(mat[i][l], mat[i][r]);
                l++;
                r--;
            }
        }
    };

    int main()
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> mat(n, vector<int>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> mat[i][j];
            }
        }

        Solution obj;
        obj.rotateMatrixBy90(mat, n, m);

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }

        return 0;
    }
    