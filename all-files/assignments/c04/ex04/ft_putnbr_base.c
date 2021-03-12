/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:36:33 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/10 12:36:38 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_error_in_base(char *base)
{
	char	*checkbase;
	int		i_check;

	checkbase = base;
	if (*base == 0 || *(base + 1) == 0)
		return (0);
	while (*checkbase)
	{
		if (*checkbase == '+' || *checkbase == '-'
			|| *checkbase <= 31)
			return (0);
		i_check = 1;
		while (*(checkbase + i_check))
		{
			if (*(checkbase + i_check) == *checkbase)
				return (0);
			i_check++;
		}
		checkbase++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	char	*charptr;
	int		itr;

	charptr = str;
	itr = 0;
	while (*charptr != 0)
	{
		itr++;
		charptr++;
	}
	return (itr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int lenbase;
	unsigned int nbr_unsigned;

	if (check_error_in_base(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr_unsigned = (unsigned int)(-1 * nbr);
		}
		else
			nbr_unsigned = (unsigned int)nbr;
		lenbase = ft_strlen(base);
		if (nbr_unsigned >= lenbase)
		{
			ft_putnbr_base(nbr_unsigned / lenbase, base);
			ft_putnbr_base(nbr_unsigned % lenbase, base);
		}
		else
		{
			write(1, base + nbr_unsigned, 1);
		}
	}
}
