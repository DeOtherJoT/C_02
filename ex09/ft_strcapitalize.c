int	ft_isSpec(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	if (c >= 'A' && c <= 'Z')
		return (0);
	if (c >= 'a' && c <= 'z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	specFlag;

	c = 0;
	specFlag = 1;
	while (str[c])
	{
		if (specFlag == 1 && (str[c] >= 'a' && str[c] <= 'z'))
			str[c] -= 32;
		if (specFlag == 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] += 32;
		specFlag = ft_isSpec(str[c]);
		c++;
	}
	return (str);
}
