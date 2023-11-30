/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:38:59 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/11/18 23:32:04 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u(unsigned long long n, char *base)
{
	unsigned int	count;
	unsigned int	base_len;

	base_len = ft_strlen(base);
	count = 0;
	if (n >= base_len)
		count += ft_put_u(n / base_len, base);
	count += write(1, &base[n % base_len], 1);
	return (count);
}
