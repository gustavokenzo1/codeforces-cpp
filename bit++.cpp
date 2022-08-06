#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, total = 0;

  cin >> n;

  while (n--)
  {
    string op;
    cin >> op;

    for (int i = 0; i < op.length(); i++)
    {
      if (op[i] == '+')
      {
        total++;
        break;
      }
      else if (op[i] == '-')
      {
        total--;
        break;
      }
    }
  }

  cout << total << endl;
  return 0;
}