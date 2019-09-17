int			m_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	index;

	index = 0;

	while (index < n && (*(str1 + index) != '\0' || *(str2 + index) != '\0'))
	{
		if (str1[index] != str2[index])
			return (str1[index] - str2[index]);
		index++;
	}
	return (0);
}
