/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 15:57:12 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/23 12:38:16 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_check_base(char *base)
{
	int		i;
	int		j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				i;
	int				l_base;
	int				result;

	i = 1;
	l_base = 0;
	if (ft_check_base(base))
	{
		l_base = ft_strlen(base);
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = nbr * (-1);
		}
		while (nbr / i >= l_base)
		{
			i = i * l_base;
		}
		while (i > 0)
		{
			result = (nbr / i) % l_base;
			ft_putchar(base[result]);
			i = i / l_base;
		}
	}
}
