/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 09:17:10 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/14 16:10:18 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexadecim(int i)
{
	char *hexa;

	hexa = "0123456789abcdef";
	write(1, &hexa[i / 16], 1);
	write(1, &hexa[i % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			hexadecim(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
