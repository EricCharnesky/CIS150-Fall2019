#include <iostream>
#include <vector>

using namespace std;

bool didSomeoneWinHorizontally(vector<vector<char>>& board);
bool didSomeoneWinVertically(vector<vector<char>>& board);
bool didSomeoneWinDiagonallyUp(vector<vector<char>>& board);
bool didSomeoneWinDiagonallyDown(vector<vector<char>>& board);
bool isTheGameTied(vector<vector<char>>& board);
bool isGameOver(vector<vector<char>>& board)
{
	return didSomeoneWinHorizontally(board) || didSomeoneWinVertically(board)
		|| didSomeoneWinDiagonallyDown(board) || didSomeoneWinDiagonallyUp(board)
		|| isTheGameTied(board);
}
void makeAMove(vector<vector<char>>& board, char& currentPlayer);

int main()
{
	vector<vector<char>> board = { { ' ', ' ', ' ' },
									{ ' ', ' ', ' ' },
									{ ' ', ' ', ' ' } };
	char currentPlayer = 'X';

	while (!isGameOver(board))
	{
		makeAMove(board, currentPlayer);
	}

	return 0;
}