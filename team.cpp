#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, int1, int2, int3, total;
  string integers;

  cin >> n;

  while (n--)
  {
    int ones = 0;

    cin >> int1 >> int2 >> int3;

    if (int1 == 1)
    {
      ones++;
    }

    if (int2 == 1)
    {
      ones++;
    }

    if (int3 == 1)
    {
      ones++;
    }

    if (ones >= 2)
    {
      total++;
    }
  }

  cout << total;

  return 0;
}