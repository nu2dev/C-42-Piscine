/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:37:40 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/10 12:37:43 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_error_in_base(char *base)
{
	char	*checkbase;
	int		i;

	checkbase = base;
	if (*base == 0 || *(base + 1) == 0)
		return (0);
	while (*checkbase)
	{
		if (*checkbase == '+' || *checkbase == '-'
			|| *checkbase == ' ' || *checkbase <= 31)
			return (0);
		i = 1;
		while (*(checkbase + i))
		{
			if (*(checkbase + i) == *checkbase)
				return (0);
			i++;
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

char	*is_in_base(char *base, char *to_find)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (*to_find == base[i])
			return (base + i);
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	unsigned int	num;
	int				sign;
	char			*charptr;

	num = 0;
	sign = 1;
	if (check_error_in_base(base))
	{
		charptr = str;
		while (*charptr == ' ' || (*charptr >= 9 && *charptr <= 13))
			charptr++;
		while (*charptr == '-' || *charptr == '+')
		{
			if (*charptr == '-')
				sign *= -1;
			charptr++;
		}
		while (is_in_base(base, charptr))
		{
			num *= ft_strlen(base);
			num += (unsigned int)(is_in_base(base, charptr) - base);
			charptr++;
		}
	}
	return (int)(num * sign);
}
