/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 09:15:27 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/14 09:16:33 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

int		main()
{
	char	str [] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
}