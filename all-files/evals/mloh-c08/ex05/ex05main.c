#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

int	main()
{
	struct s_stock_str	*res;
	char	*av[10];
	char	s1[10] = "1";
	char	s2[10] = "12";
	char	s3[10] = "123";
	char	s4[10] = "1234";
	char	s5[10] = "12345";
	char	s6[10] = "123456";
	char	s7[10] = "1234567";
	char	s8[10] = "12345678";
	av[0] = s1;
	av[1] = s2;
	av[2] = s3;
	av[3] = s4;
	av[4] = s5;
	av[5] = s6;
	av[6] = s7;
	av[7] = s8;

	res = ft_strs_to_tab(8, av);
	ft_show_tab(res);

	free(res);
}

