#include <iostream>
#include <vector>
#include <string>
using namespace std;

class TicTacToe
{
public:
	char getCurrentPlayer()
	{
		return currentPlayer;
	}
	string toString()
	{
		string output = "";
		output += board.at(0).at(0);
		output += "|";
		output += board.at(0).at(1);
		output += "|";
		output += board.at(0).at(2);
		output += '\n';
		output += "-----\n";
		output += board.at(1).at(0);
		output += "|";
		output += board.at(1).at(1);
		output += "|";
		output += board.at(1).at(2);
		output += '\n';
		output += "-----\n";
		output += board.at(2).at(0);
		output += "|";
		output += board.at(2).at(1);
		output += "|";
		output += board.at(2).at(2);
		output += '\n';
		return output;
	}
	bool didSomeoneWinHorizontally()
	{
		for (int row = 0; row < 3; row++)
		{
			if (board.at(row).at(0) != ' '
				&& board.at(row).at(0) == board.at(row).at(1)
				&& board.at(row).at(1) == board.at(row).at(2))
			{
				return true;
			}
		}
		return false;
	}
	bool didSomeoneWinVertically()
	{
		for (int column = 0; column < 3; column++)
		{
			if (board.at(0).at(column) != ' ' &&
				board.at(0).at(column) == board.at(1).at(column)
				&& board.at(1).at(column) == board.at(2).at(column))
			{
				return true;
			}
		}
		return false;
	}
	bool didSomeoneWinDiagonallyUp()
	{
		return board.at(2).at(0) != ' ' &&
			board.at(2).at(0) == board.at(1).at(1)
			&& board.at(1).at(1) == board.at(0).at(2);
	}
	bool didSomeoneWinDiagonallyDown()
	{
		return board.at(0).at(0) != ' ' &&
			board.at(0).at(0) == board.at(1).at(1)
			&& board.at(1).at(1) == board.at(2).at(2);
	}
	bool isTheGameTied()
	{
		for (vector<char> row : board)
		{
			for (char location : row)
			{
				if (location == ' ')
				{
					return false;
				}
			}
		}
		return true;
	}
	bool isGameOver()
	{
		return didSomeoneWinHorizontally() || didSomeoneWinVertically()
			|| didSomeoneWinDiagonallyDown() || didSomeoneWinDiagonallyUp()
			|| isTheGameTied();
	}
	bool playPiece(int row, int column)
	{
		if (board.at(row).at(column) != ' ')
		{
			return false;
		}
		board.at(row).at(column) = currentPlayer;

		if (currentPlayer == 'X')
		{
			currentPlayer = 'O';
		}
		else
		{
			currentPlayer = 'X';
		}
	}
	void reset()
	{
		board = { { ' ', ' ', ' ' },
					{ ' ', ' ', ' ' },
					{ ' ', ' ', ' ' } };
		currentPlayer = 'X';
	}
private:
	char currentPlayer = 'X';
	vector<vector<char>> board = { { ' ', ' ', ' ' },
									{ ' ', ' ', ' ' },
									{ ' ', ' ', ' ' } };
};

int main()
{
	TicTacToe game;
	int row;
	int column;
	char playAgain;
	do
	{
		while (!game.isGameOver())
		{
			cout << game.getCurrentPlayer() << "'s turn!" << endl;
			cout << "Enter a row and column to mark ( start with 0 )" << endl;
			cin >> row >> column;
			if (!game.playPiece(row, column))
			{
				cout << "You can't play there!" << endl;
			}
			cout << game.toString();
		}
		cout << "Game over!" << endl;
		cout << "Do you want to play again? Y/N" << endl;
		game.reset();

		cin >> playAgain;
	} while (toupper(playAgain) == 'Y');

	return 0;
}