/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:55:52 by ouakrad           #+#    #+#             */
/*   Updated: 2022/11/04 13:23:49 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

void	ft_puthexa(unsigned long nb)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (nb < 16)
	{
		ft_putchar(hexa[nb]);
	}
	if (nb >= 16)
	{
		ft_puthexa(nb / 16);
		ft_putchar(hexa[nb % 16]);
	}
}
