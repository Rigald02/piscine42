/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:48:43 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/10 10:17:01 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int i = 42;
	int j = 21;
	ft_div_mod(&i, &j, 0, 0);
	printf("%d\n%d", *div, *mod);
}
