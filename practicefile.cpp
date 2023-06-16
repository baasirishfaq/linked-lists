#include <iostream>
#include <stdio.h>
#include <climits>

using namespace std;
int main()
{

  int candles[4] = {3, 2, 1, 3};

  int largest = candles[0];
  int count = 0;
  for (int i = 0; i < 4; i++)
  {
    if (candles[i] > largest)
    {
      largest = candles[i];
    }
  }
  for (int i = 0; i < 4; i++)
  {
    if (candles[i] >= largest)
    {
      count++;
    }
  }
  cout << count;
}