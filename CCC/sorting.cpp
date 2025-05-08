#include <iostream>

using namespace std;

int main() {
  int arr[5] = {2, 1, 34, 23, 4};

  for (int x = 0; x < 5; x++) {
    for (int y = 0; y < 5; y++) {
      if (arr[y] < arr[x]) {
        int t = arr[y];
        arr[y] = arr[x];
        arr[x] = t;
      }
    }
  }

  for (int x = 0; x < 5; x++) {
    cout << arr[x] << " ";
  }

  return 0;
}
