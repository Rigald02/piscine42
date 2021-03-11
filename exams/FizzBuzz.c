/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FizzBuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlad <vlad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:04:54 by vlad              #+#    #+#             */
/*   Updated: 2021/03/04 16:04:56 by vlad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c){
	write(1, &c, 1);
}

void	ft_putfizz(){
	write(1, "fizz", 4);
}

void	ft_putbuzz(){
	write(1, "buzz", 4);
}

void	ft_putfizzbuzz(){
	write(1, "fizzbuzz", 8);
}

int		ft_putnbr(int i){
	if(i > 9){
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	if(i < 10){
		ft_putchar(i + '0');
	}
	return(0);
}

void	ft_fizzbuzz()
{
	int i;

	i = 0;

	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			ft_putfizzbuzz();
		}
		else if (i % 3 == 0)
		{
			ft_putfizz();
		}
		else if (i % 5 == 0)
		{
			ft_putbuzz();
		}
		else
		{
			ft_putnbr(i);
		}
      ft_putchar('\n');
	  i++;
	}
}

int		main(void)
{
	ft_fizzbuzz();
}