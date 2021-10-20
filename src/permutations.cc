// https://cses.fi/problemset/task/1070

#include <iostream>

using namespace std;

int main() {
  long long n;
  cin >> n;

  if (n == 2 || n == 3) {
    cout << "NO SOLUTION\n";
  } else {
    for (auto i = n - 1; i > 0; i = i - 2) {
      cout << i << " ";
    }
    for (auto i = n; i > 0; i = i - 2) {
      cout << i << " ";
    }
    cout << "\n";
  }
}
