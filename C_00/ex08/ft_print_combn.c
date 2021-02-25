/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:52:17 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/09 13:47:48 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a, int n)
{
	write(1, &a, 1);
	if (a < n)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int a;
	int m;

	a = '0';
	m = 1 * (10 ^ n);
	if (n > 0 && n < 11)
	{
		while (a < m)
		{
			print(a, m);
			a++;
		}
	}
	else
	{
		return ;
	}
}
