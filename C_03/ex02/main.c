/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 11:10:47 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/15 12:28:01 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main()
{
	char	s1 [] = "hello world";
	char	s2 [] = "hanticonstitutionnellement";
	char	s3 [] = "hello world";
	char	s4 [] = "hanticonstitutionnellement";

	printf("%s\n", ft_strcat(s1, s2));
	printf("%s\n", strcat(s3, s4));
}