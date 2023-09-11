/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:15:18 by lde-mich          #+#    #+#             */
/*   Updated: 2023/02/06 17:03:03 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexupper(unsigned int nb, int *count)
{
	char	*str;
	char	*hex;
	int		i;

	hex = "0123456789ABCDEF";
	str = (char *) malloc((ft_len(nb) + 1) * sizeof(char));
	if (!str)
		return ;
	i = ft_len(nb);
	str[i] = '\0';
	i--;
	if (nb == 0)
		str[0] = '0';
	while (nb != 0)
	{
		str[i] = hex[nb % 16];
		nb = nb / 16;
		i--;
	}
	ft_putstr(str, count);
	free(str);
}
