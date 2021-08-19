#include <unistd.h>

void	printChar(char c);

int		isPrintable(char x);

void	ft_putstr_non_printable(char *str)
{
	int	c;
	int	flag;

	c = 0;
	while (str[c])
	{
		flag = isPrintable(str[c]);
		if (flag == 1)
		{
			printChar(str[c]);
		}
		else
		{
			write(1, "\\", 1);
			printChar("0123456789abcdef"[str[c] / 16]);
			printChar("0123456789abcdef"[str[c] % 16]);
		}
		c++;
	}
}

void	printChar(char c)
{
	write(1, &c, 1);
}

int	isPrintable(char x)
{
	if (x >= 32 && x <= 126)
		return (1);
	return (0);
}
