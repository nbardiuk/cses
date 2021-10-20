// https://cses.fi/problemset/task/1083

#include <iostream>

using namespace std;

int main() {
  long long n;
  cin >> n;

  long long sum = 0;
  for (int i = 0; i < n - 1; i++) {
    int a;
    cin >> a;
    sum += a;
  }

  long long missing = (n + 1) * n / 2 - sum;

  cout << missing << "\n";
}
