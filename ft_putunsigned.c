/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:49:29 by ouakrad           #+#    #+#             */
/*   Updated: 2022/11/04 13:20:05 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

void	ft_putunsigned(unsigned int nb)
{
	if (nb > 9)
	{
		ft_putunsigned(nb / 10);
		ft_putunsigned(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
