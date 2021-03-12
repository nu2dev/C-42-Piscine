/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:45:23 by hloke             #+#    #+#             */
/*   Updated: 2021/03/07 00:43:58 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
	{
		i += 1;
		//str++;
	}
	return (i);
}

int main(void)
{
	char *arr = "adfads";
printf("%d",	ft_strlen(arr));

	return(0);
}
