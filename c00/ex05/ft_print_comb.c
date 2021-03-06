/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhugo-mo <vhugo-mo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:54:31 by vhugo-mo          #+#    #+#             */
/*   Updated: 2021/04/12 23:54:32 by vhugo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void increment_comb(char *a, char *b, char *c);

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7' && b <= '8' && c <= '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a != '7' || b != '8' || c != '9')
		{
			write(1, ",", 1);
			write(1, " ", 1);
		}
		increment_comb(&a, &b, &c);
	}
}

void	increment_comb(char *a, char *b, char *c)
{
	if (*b == '8')
	{
		(*a)++;
		*b = *a + 1;
		*c = *b + 1;
	}
	else
	{
		if (*c == '9')
		{
			(*b)++;
			*c = *b + 1;
		}
		else
		{
			(*c)++;
		}
	}
}
