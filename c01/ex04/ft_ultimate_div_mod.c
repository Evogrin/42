/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhugo-mo <vhugo-mo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:21:20 by vhugo-mo          #+#    #+#             */
/*   Updated: 2021/04/13 15:21:21 by vhugo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int batata;
	int paodebatata;

	batata = *a / *b;
	paodebatata = *a % *b;
	*a = batata;
	*b = paodebatata;
}
