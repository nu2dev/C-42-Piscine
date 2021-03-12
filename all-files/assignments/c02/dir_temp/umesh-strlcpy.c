
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	const char			*org_src = src;
	const unsigned int	org_size = size;

	if (size != 0)
	{
		while (--size != 0)
		{
			if ((*dest++ = *src++) == '\0')
				break ;
		}
	}
	if (size == 0)
	{
		if (org_size != 0)
			*dest = '\0';
		while (*src++)
			;
	}
	return (src - org_src - 1);
}


int     main(void)
{
 	char src[] = "ABCDEFG";
    char  dest[] = "2";
	unsigned int size = 2;

	printf("--before original- src = %s\n", src );
	printf("--before original-- dest = %s\n", dest);

    printf("ft_strlcpy = %u\n", ft_strlcpy(dest, src, size));

	printf("\n--After FT_strcpy(d,s,6)-- src = %s\n", src );
	printf("--After FT_strcpy(d,s,6)-- dest = %s\n", dest);

	printf("\n\nSTRLCPY = %lu", strlcpy(dest, src, size));
	printf("\n--STRLCPY(d,s,6)-- src = %s\n", src );
	printf("--STRLCPY(d,s,6)-- dest = %s\n", dest);
    return (0);
}

