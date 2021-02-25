/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 09:36:50 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/20 17:20:34 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main()
{
	int		val;
	char 	str [] = "  ----+--1234ab567";
	char	str2 [] = "1234ab567";

	val = atoi(str2);
	printf("%d\n", ft_atoi(str));
	printf("String value = %s, Int value = %d\n", str2, val);
}