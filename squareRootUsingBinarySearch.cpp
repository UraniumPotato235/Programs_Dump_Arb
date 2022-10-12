#include <bits/stdc++.h>

using namespace std;

float SQRT(int x) {
  int low = 0, high = x;
  int mid = (high + low) / 2;
  float ans;
  while (low <= high) {
    if (mid * mid == x) {
      ans = mid;
      break;
    }

    else if (mid * mid > x) {
      high = mid - 1;
      mid = (high + low) / 2;

    } else {
      low = mid + 1;
      mid = (high + low) / 2;
    }
    
  }
  for (float i = 0.1; i >= 0.0001; i /= 10) {

    while (ans * ans < x) {
      if ((ans + i) * (ans + i) > x)
        break;
      ans += i;
    }
  }
  return ans;
}

int main() {
  cout << "Hello World!\n";

  int n;
  float sq;
  cout << "Enter a number: ";
  cin >> n;
  sq = SQRT(n);
  cout << "Square root of " << n << " is: ";
  cout << setprecision(4) << sq;
  return 0;
}