#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *tofind);

int	main()
{

	printf("START PROGRAM OUTPUT\n\n");
	
	printf("First Test Case\n");
	char	*str = "Needle in a haystack";
	char	*tofind = "ack";
	printf("Your output is: %s\n", ft_strstr(str, tofind));
	printf("Expected output is: %s\n\n", strstr(str, tofind));

	printf("Second Test Case\n");
	char	*str2 = "Needle in a haystack";
	char	*tofind2 = "haym";
	printf("Your output is: ");
	printf("%s\n", ft_strstr(str2, tofind2));
	printf("Expected output is: %s\n\n", strstr(str2, tofind2));
		
	
	printf("Third Test Case\n");
	char	*str3 = "Needle in a haystack";
	char	*tofind3 = "";
	printf("Your output is: %s\n", ft_strstr(str3, tofind3));
	printf("Expected output is: %s\n\n", strstr(str3, tofind3));

	printf("Fourth Test Case\n");
	char	*str4 = "";
	char	*tofind4 = "";
	printf("Your output is: %s\n", ft_strstr(str4, tofind4));
	printf("Expected output is: %s\n\n", strstr(str4, tofind4));

	printf("END PROGRAM OUTPUT\n\n");
}
