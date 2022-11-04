/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fotmat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:49:19 by ouakrad           #+#    #+#             */
/*   Updated: 2022/11/04 13:53:09 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

void	ft_format(va_list args, char *str, int i)
{
	i++;
	if (str[i] == 'c')
		ft_putchar(va_arg(args, char));
	if (str[i] == 's')
		ft_putstr(va_arg(args, char *));
	if (str[i] == 'p')
	{
		ft_putstr("0x");
		ft_putadress(va_arg(args, unsigned long));
	}
	if (str[i] == 'd')
		ft_putnbr(va_arg(args, int));
	if (str[i] == 'i')
		ft_putunsigned(va_arg(args, unsigned int));
	if (str[i] == 'x')
		ft_puthexa(va_arg(args, unsigned long));
	if (str[i] == 'X')
		ft_puthexa(va_arg(args, unsigned long));
	if (str[i] == '%')
		ft_putchar('%');
}
