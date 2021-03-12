#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main()
{
	printf("START PROGRAM OUTPUT\n\n");

	printf("First Test Case\n");
	char	*src = " w,orl.d";
	char	dest[50] = "Hello";
	printf("Your return: %d\n", ft_strlcat(dest, src, 50));
	printf("Testing null: ");
	for (int i = 0; i < 14; i++)	
		 printf("%c", dest[i]);
	printf("\n");
	
	char	*src2 = " w,orl.d";
	char	dest2[50] = "Hello";
	printf("Intended return: %lu\n", strlcat(dest2, src2, 50));
	printf("Intended null end: ");
		for (int j = 0; j < 14; j++)	
		 printf("%c", dest2[j]);
	printf("\n\n");
	
	printf("Second Test Case\n");
	char	*src3 = "this is one hell of a run on sentence, will it ever end even before the heat death of the universe? Only god knows";
	char	dest3[50] = "Hello";
	printf("Your return: %d\n", ft_strlcat(dest3, src3, 50));
	printf("Testing null: ");
	for (int i = 0; i < 14; i++)	
		 printf("%c", dest3[i]);
	printf("\n");
	
	char	*src4 = "this is one hell of a run on sentence, will it ever end even before the heat death of the universe? Only god knows";
	char	dest4[50] = "Hello";
	printf("Intended return: %lu\n", strlcat(dest4, src4, 50));
	printf("Intended null end: ");
		for (int j = 0; j < 14; j++)	
		 printf("%c", dest4[j]);
	printf("\n\n");

	printf("Third Test Case\n");
	char	*src5 = " w,orl.d";
	char	dest5[8] = "Hello";
	printf("Your return: %d\n", ft_strlcat(dest5, src5, 1));
	printf("Testing null: ");
		for (int a = 0; a < 8; a++)	
		 printf("%c", dest5[a]);
	printf("\n");
	
	char	*src6 = " w,orl.d";
	char	dest6[8] = "Hello";
	printf("Intended return: %lu\n", strlcat(dest6, src6, 1));
	printf("Intended null end: ");
		for (int b = 0; b < 8; b++)	
		 printf("%c", dest6[b]);
	printf("\n");
}
