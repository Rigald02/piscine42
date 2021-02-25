/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:52:33 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/17 10:32:34 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main()
{
	char	src [] = "Aurora";
	char	dest [] = "Execution";
	char	src2 [] = "Aurora";
	char	dest2 [] = "Execution";

	printf("%u\n", ft_strlcat(src, dest, 5));
	printf("%lu\n", strlcat(src2, dest2, 5));
}