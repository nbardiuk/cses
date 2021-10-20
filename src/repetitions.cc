// https://cses.fi/problemset/task/1069

#include <iostream>

using namespace std;

int main() {
  int longest_group = 1;

  int current_group_len = 0;
  char current_group_char = 0;

  while (!cin.eof()) {
    char ch = cin.get();

    if (ch == current_group_char) {
      current_group_len++;
    } else {
      longest_group = max(longest_group, current_group_len);
      current_group_char = ch;
      current_group_len = 1;
    }
  };

  cout << longest_group << "\n";
}
