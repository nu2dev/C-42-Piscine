/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeh <gbeh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 14:42:36 by gbeh              #+#    #+#             */
/*   Updated: 2021/03/03 14:45:41 by gbeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int len;

	len = 0;
	if (argc > 0)
	{
		while (argv[0][len] != '\0')
			len++;
		write(1, argv[0], len);
	}
}
