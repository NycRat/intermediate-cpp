#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
  int n = stoi(argv[3]);
  // cin >> n;
  int ans = 0;
  int t = 0;

  while (t <= n) {
    if ((n - t) % stoi(argv[1]) == 0) {
      ans++;
    }
    t += stoi(argv[2]);
  }
  cout << ans;
}
