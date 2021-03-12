/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeh <gbeh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 14:51:21 by gbeh              #+#    #+#             */
/*   Updated: 2021/03/03 14:55:04 by gbeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int len;
	int idx;

	idx = 1;
	if (argc > 0)
	{
		while (idx < argc)
		{
			len = 0;
			while (argv[idx][len] != '\0')
				len++;
			write(1, argv[idx], len);
			write(1, "\n", 1);
			idx++;
		}
	}
	return (0);
}
