

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0)
	{
		i += 1;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort_ascii_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*value;

	if (tab == NULL || size <= 1)
	{
		return ;
	}
	j = 1;
	while (j < size)
	{
		i = j - 1;
		value = tab[j];
		while (i >= 0 && ft_strcmp(tab[i], value) > 0)
		{
			tab[i + 1] = tab[i];
			i -= 1;
		}
		tab[i + 1] = value;
		j += 1;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*tab[argc - 1];

	i = 1;
	while (i < argc)
	{
		tab[i - 1] = argv[i];
		i++;
	}
	ft_sort_ascii_tab(tab, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		ft_putstr(tab[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
