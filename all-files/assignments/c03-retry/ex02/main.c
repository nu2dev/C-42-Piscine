#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main()
{
	printf("START PROGRAM OUTPUT\n\n");
	char	*src = " w,orl.d";
	char	dest[100] = "Hello";
	printf("Your return: %s\n", ft_strcat(dest, src));
	printf("Testing null: ");
	for (int i = 0; i < 14; i++)	
		 printf("%c", dest[i]);
	printf("\n");
	char	*src2 = " w,orl.d";
	char	dest2[100] = "Hello";
	printf("Intended return: %s\n", strcat(dest2, src2));
	printf("Intended null end: ");
		for (int j = 0; j < 14; j++)	
		 printf("%c", dest2[j]);
	printf("\n\nEND PROGRAM OUTPUT\n\n");
}
