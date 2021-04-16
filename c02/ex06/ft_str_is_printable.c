/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhugo-mo <vhugo-mo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 00:27:54 by vhugo-mo          #+#    #+#             */
/*   Updated: 2021/04/16 00:27:55 by vhugo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if (!(str[index] >= 32 && str[index] <= 126))
			return (0);
		index++;
	}
	return (1);
}
