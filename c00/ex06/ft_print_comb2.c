/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhugo-mo <vhugo-mo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:54:40 by vhugo-mo          #+#    #+#             */
/*   Updated: 2021/04/12 23:54:41 by vhugo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void increment_comb(int *num1, int *num2);
void print_int(int i);

void	ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = 0;
	num2 = 1;
	while (num1 <= 98 && num2 <= 99)
	{
		print_int(num1);
		write(1, " ", 1);
		print_int(num2);
		if (num1 != 98 || num2 != 99)
		{
			write(1, ",", 1);
			write(1, " ", 1);
		}
		increment_comb(&num1, &num2);
	}
}

void	increment_comb(int *num1, int *num2)
{
	if (*num2 == 99)
	{
		(*num1)++;
		*num2 = *num1 + 1;
	}
	else
	{
		(*num2)++;
	}
}

void	print_int(int i)
{
	char a;
	char b;

	a = '0' + i / 10;
	b = '0' + i % 10;
	write(1, &a, 1);
	write(1, &b, 1);
}
