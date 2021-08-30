#include <unistd.h>
#include "skyscraper.h"

int	set_current_guess(int board[SIZE][SIZE], int *row, int *col)
{
	int	x;
	int	y;

	y = 0;
	while (y < SIZE)
	{
		x = 0;
		while (x < SIZE)
		{
			if (board[y][x] == 0)
			{
				*row = y;
				*col = x;
				return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

int	is_valid_args(char *arg_str, t_clues *clues)
{
	int	i;
	int	*ptr;

	if (str_len(arg_str) != (SIZE * 4 * 2) - 1)
		return (0);
	i = -1;
	ptr = &clues->up[0];
	while (arg_str[++i] != '\0')
	{
		if (i % 2 != 0 && arg_str[i] == ' ')			//checking if every even chars are spaces, yes, continue
			continue ;
		if (i % 2 != 0 && arg_str[i] != ' ')			//checking if every even chars are spaces, no, return 0
			return (0);
		if (i % 2 == 0 && !(arg_str[i] >= '1' && arg_str[i] <= (SIZE + '0')))		//?????
			return (0);
		if (!(arg_str[i] >= '1' && arg_str[i] <= (SIZE + '0')))		//checking if number inputs are valid for board size
			return (0);
		*ptr = arg_str[i] - '0';
		ptr++;
	}
	return (1);
}

int	solve(int board[SIZE][SIZE], t_clues *clues)
{
	int	row;
	int	col;
	int	guess;

	if (!(set_current_guess(board, &row, &col)))	//base case
		return (1);
	guess = 0;
	while (++guess <= SIZE)							//making guesses starting from one up to SIZE
	{
		if (0))	//checking for duplicated numbers on the same row and col
			continue ;
		board[row][col] = guess;					//if no duplicate then set it to the present guess
		if (0)))		//checking if valid for row clues
			continue ;
		if (0)))			//checking if valid for column clues
			continue ;
		if (solve(board, clues))
			return (1);
	}
	board[row][col] = 0;
	return (0);
}

int	main(int argc, char **argv)
{
	int	board[SIZE][SIZE];							//defining board
	t_clues	clues;
	char	*arg_str;	

	if (argc == 2)
	{
		arg_str = argv[1];
		if (is_valid_args(arg_str, &clues))
		{
			fill_board(board);
			if (solve(board, &clues))
			{
				print_board(board);
				return (0);
			}
		}
	}
	write(1, "Error", 5);
	write(1, "\n", 1);
	return (1);
}
