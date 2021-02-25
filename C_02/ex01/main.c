/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 09:48:43 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/13 10:56:51 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int     main()
{
    char d[] = "hello coco";
    char s[] = "Hello World";

    ft_strncpy(d, s, 15);
    printf("%s\n", d);
}