#include <unistd.h>
#include "skyscraper.h"

int	is_valid_vertical_clue(int board[SIZE][SIZE], int col, t_clues *clues)
{
	if (!(is_valid_up_clue(board, col, clues)))
		return (0);
	if (!(is_valid_down_clue(board, col, clues)))
		return (0);
	return (1);
}

int	is_valid_horizontal_clue(int board[SIZE][SIZE], int row, t_clues *clues)
{
	if (!(is_valid_right_clue(board, row, clues)))
		return (0);
	if (!(is_valid_left_clue(board, row, clues)))
		return (0);
	return (1);
}

int	print_board(int board[SIZE][SIZE])
{
	int		row;
	int		col;
	char	c;

	row = 0;
	col = 0;
	while (row < SIZE)
	{
		col = 0;
		while (col < SIZE)
		{
			c = board[row][col] + '0';
			write(1, &c, 1);
			if (col != (SIZE - 1))
				write(1, " ", 1);
			col++;
		}
		write (1, "\n", 1);
		row++;
	}
	return (1);
}

int	fill_board(int board[SIZE][SIZE])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < SIZE)
	{
		col = 0;
		while (col < SIZE)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
	return (1);
}
