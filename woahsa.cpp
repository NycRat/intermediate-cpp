#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  // O(y * x)
  bool ground[300][600] = {0};

  // O(n * L) (MAXIMUM of y*x)
  unordered_map<int, bool> boredCoordinates;

  int y = 10, x = 100;

  boredCoordinates.insert({y * 200 + x, true});

  // O(n^2)
  for (int i = 0; i < n; i++) {
    for (int i = 0; i < n; i++) {
    }
  }

  // while (true) {
  //   cin >> direction >> length;
  //   if (direction == 'u')
  // }

  return 0;
}
