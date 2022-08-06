#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int m, n;

  cin >> m >> n;

  int area = m * n;

  int dominoes = floor(area / 2);

  cout << dominoes << endl;
}