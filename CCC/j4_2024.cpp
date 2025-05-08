#include <iostream>

using namespace std;

int main() {
  int n, ans = 0, hats[1000000];
  cin >> n;

  for (int i = 0; i < n / 2; i++) {
    cin >> hats[i];
  }

  for (int i = n / 2; i < n; i++) {
    int t;
    cin >> t;
    ans += (t == hats[i - n / 2]) * 2;

    if (t == hats[i - n / 2]) {
      ans += 2;
    }
  }

  cout << ans << "\n";

  return 0;
}
