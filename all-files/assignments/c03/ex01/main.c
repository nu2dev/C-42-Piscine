#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main()
{
	printf("START PROGRAM OUTPUT\n\n");

	printf("First Test Case\n");

	char	*s1 = "Do what you want cause a pirate is free";
	char	*s2 = "Do what you want cause a pirate is free, you are a pirate!";
	printf("Your function returns: %d\n", ft_strncmp(s1, s2, 58));
	printf("Proper function returns: %d\n\n", strncmp(s1, s2, 58));
	
	printf("Second Test Case\n");
	char	*s3 = "Do what you want cause a pirate is free, you are a pirate!\0!";
	char	*s4 = "Do what you want cause a pirate is free, you are a pirate!";
	printf("Your function returns: %d\n", ft_strncmp(s3, s4, 60));
	printf("Proper function returns: %d\n\n", strncmp(s3, s4, 60));
	
	printf("Third Test Case\n");
	char	*s5 = "Do what you want cause a pirate is free, you are a pirate!";
	char	*s6 = "Do what you want cause a p\xFFrate is free, you are a pirate!";
	printf("Your function returns: %d\n", ft_strncmp(s5, s6, 58));
	printf("Proper function returns: %d\n\n", strncmp(s5, s6, 58));

	printf("Fourth Test Case\n");
	char	*s7 = "it's a beautiful day outside. birds are singing, flowers are blooming...";
	char	*s8 = "This is fine.";
	printf("Your function returns: %d\n", ft_strncmp(s7, s8, 58));
	printf("Proper function returns: %d\n\n", strncmp(s7, s8, 58));
	
	printf("END PROGRAM OUTPUT\n\n");
}
