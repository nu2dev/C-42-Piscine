/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisim <yisim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 00:10:41 by yisim             #+#    #+#             */
/*   Updated: 2021/03/10 19:26:20 by yisim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i <= 46340 && (i * i) < nb)
		i++;
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}
