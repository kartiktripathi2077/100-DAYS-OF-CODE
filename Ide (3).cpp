#include <bits/stdc++.h>
using namespace std;

 
int main () 
{
  int v, w;
  cin >> v >> w;
  float x = ((4 * v) - w) / 2;
  if ((w & 1) || w < 2 || w <= v)
    {
      cout << "INVALID INPUT";
      return 0;
    }
cout << "TW=" << x << " " << "FW=" << v - x;

}