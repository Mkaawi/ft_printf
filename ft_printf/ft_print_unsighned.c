/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsighned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdennac <abdennac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:19:04 by abdennac          #+#    #+#             */
/*   Updated: 2024/01/31 23:04:41 by abdennac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(long int n)
{
	int	ln;

	ln = 0;
	if (n <= 0)
		ln = 1;
	while (n != 0)
	{
		n = n / 10;
		ln++;
	}
	return (ln);
}

int	ft_print_unsighned(unsigned int n)
{
	int				ln;
	char			*s;
	long int		nb;
	unsigned int	i;

	nb = n;
	ln = ft_len(nb);
	s = malloc(sizeof(char) * ln + 1);
	if (!(s))
		return (-1);
	s[ln] = 0;
	ln--;
	if (nb == 0)
		s[0] = '0';
	while (nb > 0)
	{
		s[ln] = 48 + (nb % 10);
		nb = nb / 10;
		ln--;
	}
	i = ft_print_str(s);
	free(s);
	s = NULL;
	return (i);
}
