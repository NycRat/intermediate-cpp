#include <cstdlib>
#include <iostream>

using namespace std;

void print_board(char board[9]) {
  for (int i = 0; i < 9; i++) {
    cout << board[i];

    if (i % 3 != 2) {
      cout << "|";
    }

    if (i % 3 == 2) {
      cout << (i / 3 != 2 ? "\n-----\n" : "");
    }
  }
  cout << "\n\n";
}

char get_player(int turn) { return turn % 2 ? 'X' : 'O'; }

void clear() {
#if defined _WIN32
  system("cls");
  // clrscr(); // including header file : conio.h
#elif defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
  system("clear");
  // std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences
#elif defined(__APPLE__)
  system("clear");
#endif
}

char check_winner(char board[9]) {
  for (int i = 0; i < 3; i++) {
    if (board[i * 3] == board[i * 3 + 1] && board[i * 3] == board[i * 3 + 2]) {
      return board[i * 3];
    }
    if (board[i] == board[i + 3] && board[i] == board[i + 6]) {
      return board[i];
    }
  }
  if (board[0] == board[4] && board[0] == board[8]) {
    return board[0];
  }
  if (board[2] == board[4] && board[2] == board[6]) {
    return board[2];
  }
  return ' ';
}

int main() {
  char board[9];
  for (int i = 0; i < 9; i++) {
    board[i] = '1' + i;
  }

  int turn = 1;

  clear();
  while (turn < 10) {
    print_board(board);

    cout << "which square to put an " << get_player(turn) << "? ";
    int position;
    cin >> position;
    if (board[position - 1] != 'O' && board[position - 1] != 'X') {
      board[position - 1] = get_player(turn);
      turn++;
    }
    clear();

    char winner = check_winner(board);
    if (winner != ' ') {
      print_board(board);
      cout << winner << " has won !!!";
      return 0;
    }
  }

  print_board(board);
  cout << "It's a tie !";
  return 0;
}
