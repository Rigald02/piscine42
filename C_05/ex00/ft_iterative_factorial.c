/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:44:34 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/25 09:32:17 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb >= 0)
	{
		while (nb > 0)
		{
			i = i * nb;
			nb--;
		}
		return (i);
	}
	else
	{
		return (0);
	}
}
