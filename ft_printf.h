/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:21:45 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/11/18 23:15:56 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define B16L "0123456789abcdef"
# define B16U "0123456789ABCDEF"
# define B10 "0123456789"

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_strlen(const char *s);

int	ft_put_d(long long n, char *base);
int	ft_put_u(unsigned long long n, char *base);

#endif