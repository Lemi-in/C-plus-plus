#include <iostream>
#include <array>
using namespace std;

enum class Player
{
    NONE,
    X,
    O
};

class TicTacToe
{
private:
    array<array<Player, 3>, 3> board;
    Player currentPlayer;

public:
    TicTacToe() : currentPlayer(Player::X)
    {
        // Initialize the board
        for (auto &row : board)
        {
            for (auto &cell : row)
            {
                cell = Player::NONE;
            }
        }
    }

    void printBoard()
    {
        cout << "  1 2 3" << endl;
        for (int i = 0; i < 3; ++i)
        {
            cout << i + 1 << " ";
            for (int j = 0; j < 3; ++j)
            {
                switch (board[i][j])
                {
                case Player::X:
                    cout << "X ";
                    break;
                case Player::O:
                    cout << "O ";
                    break;
                case Player::NONE:
                    cout << ". ";
                    break;
                }
            }
            cout << endl;
        }
    }

    bool checkWin(Player player)
    {
        // Check rows and columns
        for (int i = 0; i < 3; ++i)
        {
            if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
                return true;
            if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
                return true;
        }

        // Check diagonals
        if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
            return true;
        if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
            return true;

        return false;
    }

    bool placeMarker(int row, int col)
    {
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != Player::NONE)
        {
            cout << "Invalid move! Try again." << endl;
            return false;
        }
        else
        {
            board[row][col] = currentPlayer;
            return true;
        }
    }

    void switchPlayer()
    {
        currentPlayer = (currentPlayer == Player::X) ? Player::O : Player::X;
    }

    void play()
    {
        int row, col;
        while (true)
        {
            printBoard();
            cout << "Player " << (currentPlayer == Player::X ? "X" : "O") << "'s turn. Enter row and column (1-3): ";
            cin >> row >> col;
            if (placeMarker(row - 1, col - 1))
            {
                if (checkWin(currentPlayer))
                {
                    cout << "Player " << (currentPlayer == Player::X ? "X" : "O") << " wins!" << endl;
                    printBoard();
                    break;
                }
                switchPlayer();
            }
        }
    }
};

int main()
{
    TicTacToe game;
    game.play();

    return 0;
}
