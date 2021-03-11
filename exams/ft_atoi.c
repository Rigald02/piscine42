/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlad <vlad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 09:07:10 by vlad              #+#    #+#             */
/*   Updated: 2021/03/08 09:37:44 by vlad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			nbr = nbr * 10 + (str[i] - '0');
		}
		if (str[i] >= 'A')
		{
			return(nbr);
		}
		i++;
	}
	return(nbr);
}

int		main()
{
	printf("%d\n", ft_atoi("   ++--123456abdefgh789"));
	//printf("%d\n", atoi("  123456abdefgh789"));
}