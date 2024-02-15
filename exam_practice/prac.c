#include <stdio.h>
#include <stdlib.h>

char*	ft_strdup(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	char *result = (char*) malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] != '\0')
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return result;
}

int main() {
	char *s1 = "hello world";
	char *s2 = ft_strdup(s1);

	printf("s1: %s\ns2: %s\n", s1 , s2);
}
