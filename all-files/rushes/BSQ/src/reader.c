/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeh <gbeh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:49:10 by gbeh              #+#    #+#             */
/*   Updated: 2021/03/09 12:15:18 by gbeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"

void	add_map_row(int **board, char *inp, char *cset)
{
	const int	buf_size = slen(inp) - 1;
	int			*row;
	int			idx;

	idx = -1;
	row = initialise_row(buf_size);
	while (++idx < buf_size)
	{
		if (inp[idx] == cset[0])
			row[idx] = 0;
		else if (inp[idx] == cset[1])
			row[idx] = 1;
		else
			row[idx] = -1;
	}
	push_row(board, row);
	free(inp);
}

int		read_row(int fd, char **row, int buf_size)
{
	int	idx;
	int	eof;

	idx = 0;
	*row = (char *)malloc(sizeof(**row) * (buf_size + 1));
	while ((*row)[idx] != '\n')
	{
		eof = idx;
		while (idx < buf_size &&
				read(fd, (*row) + idx, 1) &&
				(*row)[idx] != '\n')
			idx++;
		if (eof == idx)
			return (0);
		if (idx == buf_size && (*row)[idx] != '\n')
		{
			buf_size *= 2;
			*row = resize_arr(*row, buf_size + 1);
		}
	}
	if ((*row)[idx] != '\n')
		return (0);
	(*row)[idx + 1] = '\0';
	return (1);
}

int		parse_map_args(char *line, char **cset)
{
	const int	line_size = slen(line);
	int			rows;

	if (line_size > 4)
	{
		(*cset)[0] = line[line_size - 3];
		(*cset)[1] = line[line_size - 4];
		(*cset)[2] = line[line_size - 2];
		if ((*cset)[0] != (*cset)[1] && (*cset)[0] != (*cset)[2] &&
				(*cset)[1] != (*cset)[2])
		{
			line[line_size - 4] = '\0';
			rows = ft_atoi(&line);
			if (*line == '\0')
				return (rows);
		}
	}
	return (0);
}

int		**read_map(int fd, char **cset)
{
	int		**board;
	char	*line;
	char	*row;
	int		idx;
	int		rows;

	read_row(fd, &line, 13);
	rows = parse_map_args(line, cset);
	board = initialise_board(rows);
	idx = 0;
	while (idx < rows)
	{
		row = "";
		if (read_row(fd, &row, rows))
			add_map_row(board, row, *cset);
		else
			idx = rows;
		idx++;
	}
	return (board);
}

int		**read_map_file(char *fname, char **cset)
{
	char	*c;
	int		**board;
	int		fd;

	c = 0;
	fd = open(fname, O_RDONLY);
	board = read_map(fd, cset);
	if (read(fd, c, 1))
		board[0][0] = -1;
	return (board);
}
