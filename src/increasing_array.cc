// https://cses.fi/problemset/task/1094

#include <iostream>

using namespace std;

int main() {
  long long n;
  cin >> n;

  long long steps = 0;

  long long previous = -1;
  long long current;

  for (int i=0; i<n; i++) {
    cin >> current;

    steps += previous - min(current, previous);
    previous = max(current, previous);
  }

  cout << steps << "\n";
}
