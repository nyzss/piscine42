#include <stdlib.h>
#include <stdio.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char **split(char *str)
{
	int	i;
	int	j;
	int	k;
	int	l;
	char	**result = (char **)malloc(sizeof(char) * (ft_strlen(str) * 2));
	char	*word;
	
	i = 0;
	k = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (is_space(str[i]) == 1)
		{
			word = (char *) malloc (sizeof(char) * (i + 1));
			l = 0;
			while (j < i)
			{
				word[l] = str[j];
				l++;
				j++;
			}
			j = i + 1;
			result[k] = word;
			k++;
		}
		i++;
	}
	return result;
}

int main()
{
	char **arr = split("Hello world, how is it going	in this beautiful	day ?");
	int i = 0;
	while (arr[i] != NULL)
	{
		printf("%s\n", arr[i]);
		i++;
	}
}
/*
//put nbr recap:
//
int	putnbr(int nb)
{
	long n;

	n = nb;

	if (n < 0)
		print('-')
		n *= -1;
	if (n / 10 != 0)
		putnbr(n / 10)
	print(n % 10 + '0')
}
*/
