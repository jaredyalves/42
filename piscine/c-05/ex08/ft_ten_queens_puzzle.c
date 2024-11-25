#include <unistd.h>

void	ft_putchar(char chr)
{
	write(1, &chr, 1);
}

void	ft_print(const int board[100])
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (board[i * 10 + j] == 1)
				ft_putchar((char)(j + '0'));
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}

int	ft_is_safe(const int board[100], int row, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		if (board[row * 10 + i])
			return (0);
		if (board[i * 10 + col])
			return (0);
		i++;
	}
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (board[i * 10 + j] && (row - col == i - j || row + col == i + j))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_solve(int board[100], int row, int *count)
{
	int	col;

	col = 0;
	if (row == 10)
	{
		ft_print(board);
		(*count)++;
		return ;
	}
	while (col < 10)
	{
		if (ft_is_safe(board, row, col))
		{
			board[row * 10 + col] = 1;
			ft_solve(board, row + 1, count);
			board[row * 10 + col] = 0;
		}
		col++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	count;
	int	board[100];

	i = 0;
	count = 0;
	while (i < 100)
	{
		board[i] = 0;
		i++;
	}
	ft_solve(board, 0, &count);
	return (count);
}
