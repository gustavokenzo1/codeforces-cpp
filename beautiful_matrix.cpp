#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int lines = 5;
  int matrix[5][5];

  for (int i = 0; i < 5; i++)
  {
    cin >> matrix[i][0] >> matrix[i][1] >> matrix[i][2] >> matrix[i][3] >> matrix[i][4];
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (matrix[i][j] == 1)
      {
        cout << abs(2 - i) + abs(2 - j);
      }
    }
  }

  return 0;
}