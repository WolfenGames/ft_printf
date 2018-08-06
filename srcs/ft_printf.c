/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 11:21:48 by jwolf             #+#    #+#             */
/*   Updated: 2018/08/06 12:24:27 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		printf_stuff(const char *s, va_list *args, size_t len)
{
	char	*next;
	
	next = ft_strrchr(s, '%');
	return (ft_strlen(s));
}

int		ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		ret;

	va_start(args, fmt);
	ret = printf_stuff(fmt, &args, 0);
	va_end(args);
	return (ret);
}