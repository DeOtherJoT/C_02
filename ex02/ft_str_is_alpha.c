int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if ((str[counter] < 'A') || (str[counter] > 'Z' && str[counter] < 'a'))
		{
			return (0);
		}
		if (str[counter] > 'z')
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
