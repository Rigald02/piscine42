/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:00:24 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/14 15:10:23 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[i] = str[i] - 32;
		if (str[i] < '0' || (str[i] > '9' &&
			str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] = str[j] - 32;
		}
		i++;
		j++;
	}
	return (str);
}
