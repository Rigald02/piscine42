/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:34:00 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/24 14:35:00 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_find_next_prime(int nb);

int	main()
{
	printf("%d\n", ft_find_next_prime(11));
}