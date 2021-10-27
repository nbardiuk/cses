// https://cses.fi/problemset/task/1092/

#include <cmath>
#include <iostream>

using namespace std;

int main() {
  long long n;
  cin >> n;

  long long sum = n * (n + 1) / 2;
  if (sum % 2) {
    cout << "NO\n";
    return 0;
  }

  cout << "YES\n";
  // k*(k+1)/2 >= sum/2
  long long k = ceil((sqrt(4 * sum + 1) - 1) / 2);
  long long odd_number = k * (k + 1) / 2 - sum / 2;
  int odd_exists = odd_number > 0;

  cout << k - odd_exists << "\n";
  for (int i = 1; i <= k; i++) {
    if (i != odd_number) {
      cout << i << " ";
    }
  }

  cout << "\n";
  cout << (n - k) + odd_exists << "\n";

  if (odd_exists)
    cout << odd_number << " ";

  for (int i = k + 1; i <= n; i++) {
    cout << i << " ";
  }
}
