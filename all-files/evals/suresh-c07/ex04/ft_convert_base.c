/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 22:22:22 by schetty           #+#    #+#             */
/*   Updated: 2021/03/04 22:22:22 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_find_base(char ch, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (ch == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		check_base(char *base)
{
	int		i;
	int		j;

	i = -1;
	if (base[0] && base[1])
		while (base[++i])
		{
			j = i;
			while (base[++j])
			{
				if (base[i] == base[j])
					return (-1);
			}
			if (base[i] == ' ' || base[i] == '+' || base[i] == '-' ||
				(base[i] >= '\t' && base[i] <= '\r'))
			{
				return (-1);
			}
		}
	return (i);
}

int		ft_atoi_base(char *str, char *base, int base_len)
{
	int		output;
	int		base_value;
	int		neg;

	neg = 0;
	while (*str && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
		str++;
	while (*str && (*str == '-' || *str == '+'))
		neg += (*str++ == '-') ? 1 : 0;
	output = 0;
	base_value = 0;
	while (*str && base_len > 1 && base_value != -1)
	{
		base_value = ft_find_base(*str++, base);
		if (base_value != -1)
			output = ((output * base_len) + base_value);
	}
	if (output)
		output *= (neg % 2 != 0 ? -1 : 1);
	return (output);
}

char	*convert_to(int nbr, char *to_base, int base_len)
{
	int				i;
	unsigned int	nb;
	char			*output;

	i = (nbr <= 0 ? 1 : 0);
	nb = nbr * (nbr < 0 ? -1 : 1);
	while (nb > 0)
	{
		nb /= base_len;
		i++;
	}
	output = (char*)malloc(sizeof(*output) * i + 1);
	output[i] = '\0';
	if (nbr < 0)
		output[0] = '-';
	if (nbr == 0)
		output[0] = to_base[nbr % base_len];
	nb = nbr * (nbr < 0 ? -1 : 1);
	while (nb > 0)
	{
		output[--i] = to_base[nb % base_len];
		nb /= base_len;
	}
	return (output);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;

	if (nbr && check_base(base_from) > 1 && check_base(base_to) > 1)
	{
		nb = ft_atoi_base(nbr, base_from, check_base(base_from));
		return (convert_to(nb, base_to, check_base(base_to)));
	}
	return (NULL);
}
