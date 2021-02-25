/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 09:46:46 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/08 15:43:18 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	numbers(int a)
{
	int b;
	int c;

	b = 0;
	c = 0;
	b = (a / 10 + '0');
	c = (a % 10 + '0');
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		numbers(a);
		write(1, " ", 1);
		numbers(b);
		if (a < 98)
		{
			write(1, ", ", 2);
		}
		b++;
		if (b > 99)
		{
			a++;
			b = a + 1;
		}
	}
}
