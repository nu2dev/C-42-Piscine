#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main()
{
	printf("START PROGRAM OUTPUT\n\n");

	printf("First Test Case\n");

	char	*s1 = "Do what you want cause a pirate is free";
	char	*s2 = "Do what you want cause a pirate is free, you are a pirate!";
	printf("Your function returns: %d\n", ft_strcmp(s1, s2));
	printf("Proper function returns: %d\n\n", strcmp(s1, s2));

	printf("Second Test Case\n");
	printf("Your function returns: %d\n", ft_strcmp(s2, s1));
	printf("Proper function returns: %d\n\n", strcmp(s2, s1));

	printf("Third Test Case\n");

	char	*s3 = "Do what you want cause a pirate is free, are you a pirate?";
	char	*s4 = "Do what you want cause a p\xFFrate is free, you are a pirate!";
	printf("Your function returns: %d\n", ft_strcmp(s3, s4));
	printf("Proper function returns: %d\n\n", strcmp(s3, s4));

	printf("END PROGRAM OUTPUT\n\n");
}
