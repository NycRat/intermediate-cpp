#include <iostream>

using namespace std;

const int max_depth = 205, max_left_right = 420;
const int middle = max_left_right * 0.5;
int y = 1, x = 0;
bool ground_bored[max_depth][max_left_right];

bool bore_ground(char direction, int length) {
  while (length-- > 0) {
    if (direction == 'd') {
      y++;
    } else if (direction == 'u') {
      y--;
    } else if (direction == 'l') {
      x--;
    } else if (direction == 'r') {
      x++;
    }

    if (ground_bored[y][middle + x]) {
      if (direction == 'd') {
        y += length;
      } else if (direction == 'u') {
        y -= length;
      } else if (direction == 'l') {
        x -= length;
      } else if (direction == 'r') {
        x += length;
      }
      return false;
    }
    ground_bored[y][middle + x] = true;
  }
  return true;
}

int main() {
  ground_bored[1][middle] = true;
  bore_ground('d', 2);
  bore_ground('r', 3);
  bore_ground('d', 2);
  bore_ground('r', 2);
  bore_ground('u', 2);
  bore_ground('r', 2);
  bore_ground('d', 4);
  bore_ground('l', 8);
  bore_ground('u', 2);
  while (true) {
    char direction;
    int length;

    cin >> direction >> length;

    if (direction == 'q') {
      break;
    }
    if (!bore_ground(direction, length)) {
      cout << x << " -" << y << " DANGER\n";
      break;
    }
    cout << x << " -" << y << " safe\n";
  }

  return 0;
}
