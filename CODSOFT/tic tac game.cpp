#include <iostream>
#include <vector>

using namespace std;

// Function to print the Tic-Tac-Toe board
void printBoard(const vector<vector<char> >& board) {
    cout << "   1   2   3" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << "  ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << endl;
        if (i < 2) cout << "  ---+---+---" << endl;
    }
    cout << endl;
}

// Function to check if the game is over
bool isGameOver(const vector<vector<char> >& board, char player) {
    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
            return true;
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        return true;

    // Check for a tie
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ')
                return false; // Empty space found, the game is not over
        }
    }
    // All cells are filled, it's a tie
    return true;
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char currentPlayer = 'X';

    cout << "Welcome to Tic-Tac-Toe!" << endl;

    while (true) {
        printBoard(board);

        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        // Check for valid input
        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        // Update the board
        board[row - 1][col - 1] = currentPlayer;

        // Check if the game is over
        if (isGameOver(board, currentPlayer)) {
            printBoard(board);
            cout << "Player " << currentPlayer << " wins! Congratulations!" << endl;
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}
