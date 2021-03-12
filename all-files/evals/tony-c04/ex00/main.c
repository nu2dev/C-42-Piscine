#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int main()
{
	char *s1 = "12345678\090";
	printf("Expected 8, strlen %d, returned %d\n", (int)strlen(s1), ft_strlen(s1));

	char s2[10] = "\0\0\0\0";
	printf("Expected 0, strlen %d, returned %d\n", (int)strlen(s2), ft_strlen(s2));

	char *s3 = "";
	printf("Expected 0, strlen %d, returned %d\n", (int)strlen(s3), ft_strlen(s3));
}
