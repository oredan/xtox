/* ************************************************************************** */
/*                                                                            */
/*       ::::::    ::::::   :::  ::::::::  ::::::::   :::  ::::::    :::::::  */
/*     :+:   :+: :+:   :+: :+: :+:   :+:  :+:    :+: :+: :+:   :+: :+:    :+: */
/*    +:+       +:+       +:+ +:+   +:+  +:+    +:+     +:+       +:+    +:+  */
/*   +#+       +:+       +#+ +:+   +#+  +:+    +#+ +:+ +#+       +#+:+:+#+:   */
/*  +#+       +#+       +#+   +#+#+#+# #+#+#+#+   +#+ +#+       +#+           */
/* #+#   #+# #+#   #+# #+#            #+#    #+# #+# #+#   #+# #+#    #+#     */
/*  ######    ######  ############## ###    ### ###   ######    #######       */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   strtoul.c                                cclarice@student.21-school.ru   */
/*                                                                            */
/*   Created/Updated: 2021/05/01 19:00:25  /  2021/05/02 16:40:30 @cclarice   */
/*                                                                            */
/* ************************************************************************** */

#include "../xtox.h"

unsigned long	ft_strtoul(char *str)
{
	unsigned long	ret;

	ret = 0;

	while (*str == '0')
		str++;
	if (*str >= '1' && *str <= '9')
		ret += *str++ - '0';
	while (*str >= '0' && *str <= '9')
	{
		ret *= 10;
		ret += *str - '0';
		if (ret <= 9)
			return (0xffffffffffffffff)
		str++;
	}
	return (ret);
}