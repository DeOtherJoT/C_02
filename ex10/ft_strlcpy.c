unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	if (n > 0)
	{
		while (src[c] && c < (n - 1))
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}
