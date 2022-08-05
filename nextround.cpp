#include <iostream>

using namespace std;

int main()
{
  int n, k;

  cin >> n >> k;

  int score;
  int scores[n];
  int score_to_beat;
  int advance = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> score;

    scores[i] = score;

    if (i + 1 == k)
    {
      score_to_beat = score;
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (scores[i] >= score_to_beat && scores[i] > 0)
    {
      advance++;
    }
  }

  cout << advance << endl;

  return 0;
}