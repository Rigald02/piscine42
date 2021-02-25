/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 14:59:25 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/14 14:44:17 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcapitalize(char *str);

int     main()
{
    char    str [] = "salut, coMMent tu vas? 42mots quarante-deux; cinquante+et+un";

    ft_strcapitalize(str);
}