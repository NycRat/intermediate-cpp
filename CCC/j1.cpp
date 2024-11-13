#include <iostream>

int main() {
  int small_boxes, regular_boxes;
  std::cin >> regular_boxes >> small_boxes;

  int answer = regular_boxes * 8 + small_boxes * 3 - 28;

  std::cout << answer << "\n";

  return 0;
}
