/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 09:04:59 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/07 11:48:31 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar();

void	horizontale(char left, char mid, char right, int x)
{
	int j;

	j = 1;
	if (x == 1)
	{
		ft_putchar(left);
		write(1, "\n", 1);
		return ;
	}
	else if (x > 1)
	{
		ft_putchar(left);
		while (j <= x - 2)
		{
			j++;
			ft_putchar(mid);
		}
		ft_putchar(right);
		write(1, "\n", 1);
	}
}

void	rush(int x, int y)
{
	int i;

	i = y;
	while (i > 0)
	{
		if (i == y)
		{
			horizontale('A', 'B', 'C', x);
		}
		if (i > 1 && i != y)
		{
			horizontale('B', ' ', 'B', x);
		}
		if (i == 1 && y > 1)
		{
			horizontale('C', 'B', 'A', x);
		}
		i--;
	}
	return ;
}
