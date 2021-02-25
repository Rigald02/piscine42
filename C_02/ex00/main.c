/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 14:14:39 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/13 11:02:38 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main()
{
	char d[] = "hello World";
	char s[] = "helo coco";
	ft_strcpy(d, s);
	printf("%s\n", d);
}
