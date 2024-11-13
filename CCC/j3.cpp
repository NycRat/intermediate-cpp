#include <iostream>

using namespace std;

int get_turns(string &instructions_string, int &i) {
  int turns = 0;
  while (instructions_string[i] >= '0' && instructions_string[i] <= '9') {
    turns *= 10;
    turns += instructions_string[i] - '0';
    i++;
  }
  return turns;
}

int main() {
  string instructions_string, current_strings;
  cin >> instructions_string;

  for (int i = 0; i < instructions_string.length(); i++) {
    if (instructions_string[i] == '-') {
      i++;
      cout << current_strings << " loosen " << get_turns(instructions_string, i)
           << "\n";
      current_strings = "";
      i--;
    } else if (instructions_string[i] == '+') {
      i++;
      cout << current_strings << " tighten "
           << get_turns(instructions_string, i) << "\n";
      current_strings = "";
      i--;
    } else {
      current_strings += instructions_string[i];
    }
  }
  return 0;
}
