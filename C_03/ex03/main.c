/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:41:44 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/15 12:50:43 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int		main()
{
	char	s1 [] = "hello world";
	char	s2 [] = "hanticonstitutionnellement";
	char	s3 [] = "hello world";
	char	s4 [] = "hanticonstitutionnellement";

	printf("%s\n", ft_strncat(s1, s2, 8));
	printf("%s\n", strncat(s3, s4, 8));
}