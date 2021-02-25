/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:54:21 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/16 15:12:38 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main()
{
	char	s1 [] = "hello world mon coco";
	char	s2 [] = "world";
	char	s3 [] = "hello world mon coco";
	char	s4 [] = "world";

	printf("%s\n", ft_strstr(s1, s2));
	printf("%s\n", strstr(s3, s4));
}