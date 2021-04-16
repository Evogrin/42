/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhugo-mo <vhugo-mo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:23:08 by vhugo-mo          #+#    #+#             */
/*   Updated: 2021/04/14 16:36:09 by vhugo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int count;

	count = 0;
	while (count < size / 2)
	{
		ft_swap(&tab[count], &tab[size - 1 - count]);
		count++;
	}
}
