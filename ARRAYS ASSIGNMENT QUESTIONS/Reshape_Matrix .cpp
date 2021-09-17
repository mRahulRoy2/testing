#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{

  vector<vector<int>> ans(r, vector<int>(c));
  if (mat.size() * mat[0].size() != r * c)
    return mat;

  else
  {
    int row = 0, col = 0;
    for (int i = 0; i < mat.size(); i++)
    {
      for (int j = 0; j < mat[0].size(); j++)
      {
        ans[row][col] = mat[i][j];
        col++;
        if (col == c)
        {
          row++;
          col = 0;
        }
      }
    }
  }
  return ans;
}

int main()
{
  vector<vector<int>> mat(3, vector<int>(4));
  int r = 2, c = 6;
  cout << "Enter " << mat.size() * mat[0].size() << " Elements " << endl;
  for (int i = 0; i < mat.size(); i++)
  {
    for (int j = 0; j < mat[0].size(); j++)
    {
      int x;
      cin >> x;
      mat[i][j] = x;
    }
  }
  system("cls");
  cout << "Resultant Reshape Matrix :" << endl;
  vector<vector<int>> res = matrixReshape(mat, r, c);
  for (int i = 0; i < res.size(); i++)
  {
    for (int j = 0; j < res[0].size(); j++)
    {
      cout << res[i][j] << "  ";
    }
    cout << endl;
  }

  return 0;
}