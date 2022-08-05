#include <iostream>

using namespace std;

int main()
{
  unsigned long long n, m, a;
  unsigned long long total_vertical, total_horizontal;

  cin >> n >> m >> a;

  while (n >= a)
  {
    total_vertical++;
    n -= a;
  }

  if (n > 0)
  {
    total_vertical++;
  }

  while (m >= a)
  {
    total_horizontal++;
    m -= a;
  }

  if (m > 0)
  {
    total_horizontal++;
  }

  cout << total_vertical * total_horizontal << endl;

  return 0;
}