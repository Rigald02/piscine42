/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:57:36 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/17 16:57:16 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *dest)
{
	unsigned int	k;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	return (k);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;

	i = 0;
	d = len(dest);
	s = len(src);
	if (size == 0)
		return (s);
	else if (size <= d)
	{
		return (size + s);
	}
	while (src[i] != '\0' && (i - 1 < size))
	{
		dest[d] = src[i];
		i++;
		d++;
	}
	dest[d] = '\0';
	return (d + s);
}
