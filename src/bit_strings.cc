#include <iostream>

using namespace std;

int pow(long long base, long long exponent, long long modulus) {
  long long result = 1;
  while (exponent > 0) {
    if (exponent % 2)
      result = (result * base) % modulus;
    exponent >>= 1;
    base = (base * base) % modulus;
  }
  return result;
}

int main() {
  long long n;
  cin >> n;
  cout << pow(2, n, 1000000007);
}
