#include <cctype>
#include <iostream>

using namespace std;

int get_turns(string &instructions_string, int &i) { // index is a reference
  int turns = 0;
  while (instructions_string[i] >= '0' &&
         instructions_string[i] <= '9') { // can parse ascii
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
    char c = instructions_string[i];
    if (c == '-' || c == '+') {
      string lt =
          c == '+' ? " tighten " : " loosen "; // i used ternary statement,
                                               // could do this in other way
      i++;
      cout << current_strings << c << get_turns(instructions_string, i) << "\n";
      current_strings = "";
      i--;
    } else {
      current_strings += instructions_string[i];
    }
  }
  return 0;
}
