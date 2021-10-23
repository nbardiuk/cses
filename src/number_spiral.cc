// https://cses.fi/problemset/task/1071/

#include <iostream>

using namespace std;

long long value_at(long long x, long long y) {
  auto circle = max(x, y);

  auto direction = circle % 2;
  auto end_x = direction ? circle : 1;
  auto end_y = direction ? 1 : circle;

  auto distance_to_end = abs(end_x - x) + abs(end_y - y);

  auto end_value = circle * circle;

  return end_value - distance_to_end;
}

int main() {
  long long n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    long long y;
    cin >> y;

    long long x;
    cin >> x;

    cout << value_at(x, y) << "\n";
  }
}
