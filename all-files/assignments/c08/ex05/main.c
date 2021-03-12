#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int main()
{
	char *inp[3];
	int i = 0;
	inp[0] = "test";
	inp[1] = "testing";
	inp[2] = "is it working";
	t_stock_str *out = ft_strs_to_tab(3, inp);
	while (out[i].str)
	{
		printf("%d, %s, %s\n", out[i].size, out[i].str, out[i].copy);
		i++;
	}
	ft_show_tab(out);
}