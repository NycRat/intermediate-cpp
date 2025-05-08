#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int days[5] = {0, 0, 0, 0, 0};
  string input;

  while (n--) {
    cin >> input;
    for (int j = 0; j < input.length(); j++)
      days[j] += input[j] == 'Y';
  }

  string ans = "";
  int max_people = 0;

  for (int i = 0; i < 5; i++) {
    if (days[i] == max_people) {
      ans += ',';
      ans += '1' + i;
    }
    if (days[i] > max_people) {
      ans = '1' + i;
      max_people = days[i];
    }
  }

  cout << ans;

  return 0;
}
