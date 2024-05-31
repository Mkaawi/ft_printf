/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdennac <abdennac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:15:11 by abdennac          #+#    #+#             */
/*   Updated: 2024/02/10 15:01:44 by abdennac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexo(unsigned long n)
{
	char	*hex;
	int		count;

	hex = "0123456789abcdef";
	count = 0;
	if (n < 16)
		count += ft_print_char(hex[n]);
	else
	{
		count += ft_print_hexo(n / 16);
		count += ft_print_char(hex[n % 16]);
	}
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	ft_print_str("0x");
	return (2 + ft_print_hexo((unsigned long)ptr));
}
