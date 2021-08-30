#include "skyscraper.h"

int	is_valid_right_clue(int board[SIZE][SIZE], int row, t_clues *clues)
{
	int	x;
	int	tallest;
	int	viewable;

	x = SIZE - 1;
	tallest = 0;
	viewable = 0;
	while (x >= 0)
	{
		if (board[row][x] > tallest)
		{
			viewable = viewable + 1;
			tallest = board[row][x];
		}
		x--;
	}
	if (viewable == clues->right[row])
		return (1);
	return (0);
}

int	is_valid_left_clue(int board[SIZE][SIZE], int row, t_clues *clues)
{
	int	x;
	int	tallest;
	int	viewable;

	x = 0;
	tallest = 0;
	viewable = 0;
	while (x < SIZE)
	{
		if (board[row][x] > tallest)
		{
			viewable = viewable + 1;
			tallest = board[row][x];
		}
		x++;
	}
	if (viewable == clues->left[row])
		return (1);
	return (0);
}

int	is_valid_down_clue(int	board[SIZE][SIZE], int col, t_clues *clues)
{
	int	y;
	int	tallest;
	int	viewable;

	y = SIZE - 1;
	tallest = 0;
	viewable = 0;
	while (y >= 0)
	{
		if (board[y][col] > tallest)
		{
			viewable = viewable + 1;
			tallest = board[y][col];
		}
		y--;
	}
	if (viewable == clues->down[col])
		return (1);
	return (0);
}

int	is_valid_up_clue(int board[SIZE][SIZE], int col, t_clues *clues)
{
	int	y;
	int	tallest;
	int	viewable;

	y = 0;
	tallest = 0;
	viewable = 0;
	while (y < SIZE)
	{
		if (board[y][col] > tallest)
		{
			viewable = viewable + 1;
			tallest = board[y][col];
		}
		y++;
	}
	if (viewable == clues->up[col])
		return (1);
	return (0);
}

int	is_duplicate(int board[SIZE][SIZE], int row, int col, int guess)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (board[row][i] == guess || board[i][col] == guess)
			return (1);
		i++;
	}
	return (0);
}
int main void
return 0
return 1;

1 true
0 false