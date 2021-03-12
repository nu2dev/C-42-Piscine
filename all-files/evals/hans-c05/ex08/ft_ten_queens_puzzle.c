/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 14:51:39 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/06 15:31:05 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		issafe(int grid[10][10], int row, int col, int num)
{
	int x;
	int y;

	x = 0;
	while (x <= 9)
	{
		if (grid[row][x] == num)
			return (0);
		x++;
	}
	y = 0;
	while (y <= 9)
	{
		if (grid[y][col] == num)
			return (0);
		y++;
	}
	return (1);
}

int		solvesudoku(int grid[10][10], int row, int col)
{
	int num;

	num = 0;
	if (row == 9 && col == 10)
		return (1);
	if (col == 10)
	{
		row++;
		col = 0;
	}
	if (grid[row][col] > 0)
		return (solvesudoku(grid, row, col + 1));
	while (num <= 9)
	{
		if (issafe(grid, row, col, num) == 1)
		{
			grid[row][col] = num;
			if (solvesudoku(grid, row, col + 1) == 1)
				return (1);
		}
		num++;
		grid[row][col] = 0;
	}
	return (0);
}

void	print(int arr[10][10])
{
	int n;
	int i;
	int j;

	n = 10;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			ft_putchar('0' + arr[i][j]);
			ft_putchar(32);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int i;
	int j;
	int grid[10][10];

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	if (solvesudoku(grid, 0, 0) == 1)
		print(grid);
	return (0);
}
