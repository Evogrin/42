/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhugo-mo <vhugo-mo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 01:14:21 by vhugo-mo          #+#    #+#             */
/*   Updated: 2021/04/16 01:14:23 by vhugo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int counter;

	counter = -1;
	while (++counter < size)
	{
		dest[counter] = src[counter];
	}
	dest[counter - 1] = '\0';
	counter = 0;
	while (src[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
