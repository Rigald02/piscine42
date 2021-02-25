/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:01:39 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/13 16:11:25 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main()
{
	char	dest	[] = "Hello Coco";
    char	src		[] = "Hello World";
	ft_strlcpy(dest, src, 20);
}