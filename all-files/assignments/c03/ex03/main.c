#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned nb);

int		main()
{
	printf("START PROGRAM OUTPUT\n\n");

	printf("First Test Case\n");
	char	*src = " w,orl.d";
	char	dest[100] = "Hello";
	printf("Your return: %s\n", ft_strncat(dest, src, 4));
	printf("Testing null: ");
	for (int i = 0; i < 10; i++)	
		 printf("%c", dest[i]);
	printf("\n");
	
	char	*src2 = " w,orl.d";
	char	dest2[100] = "Hello";
	printf("Intended return: %s\n", strncat(dest2, src2, 4));
	printf("Intended null end: ");
		for (int j = 0; j < 10; j++)	
		 printf("%c", dest2[j]);
	printf("\n\n");
	
	printf("Second Test Case\n");
	char	*src3 = " w,orl.d";
	char	dest3[100] = "Hello\0aaaaaaaaaaaaaaaaaaaa";
	printf("Your return: %s\n", ft_strncat(dest3, src3, 10));
	printf("Testing null: ");
		for (int a = 0; a < 16; a++)	
		 printf("%c", dest3[a]);
	printf("\n");
	
	char	*src4 = " w,orl.d";
	char	dest4[100] = "Hello\0aaaaaaaaaaaaaaaaaaaa";
	printf("Intended return: %s\n", strncat(dest4, src4, 10));
	printf("Intended null end: ");
		for (int b = 0; b < 16; b++)	
		 printf("%c", dest4[b]);
	printf("\n\n");

	printf("Third Test Case\n");
	const unsigned int	segf = 2147483;
	char	*src5 = " w,orl.d";
	char	dest5[segf] = "Hello";
	printf("Your return: %s\n", ft_strncat(dest5, src5, segf));
	printf("Testing null: ");
		for (int a = 0; a < 16; a++)	
		 printf("%c", dest5[a]);
	printf("\n");
	
	char	*src6 = " w,orl.d";
	char	dest6[segf] = "Hello";
	printf("Intended return: %s\n", strncat(dest6, src6, segf));
	printf("Intended null end: ");
		for (int b = 0; b < 16; b++)	
		 printf("%c", dest6[b]);
	printf("\n\n");

	printf("END PROGRAM OUTPUT\n\n");
}
