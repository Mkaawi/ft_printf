/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdennac <abdennac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:15:00 by abdennac          #+#    #+#             */
/*   Updated: 2024/01/31 23:37:52 by abdennac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_print_hex(unsigned int n, char format)
{
	char			*hex;
	int				count;
	unsigned long	hex_ln;
	unsigned int	nm;

	if (format == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	count = 0;
	hex_ln = ft_strlen(hex);
	nm = n;
	if (n < hex_ln)
		count += ft_print_char(hex[nm]);
	else if (nm > (hex_ln - 1))
	{
		count += ft_print_hex(nm / hex_ln, format);
		count += ft_print_char(hex[nm % hex_ln]);
	}
	return (count);
}
