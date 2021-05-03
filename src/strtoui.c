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
/*   strtoui.c                                cclarice@student.21-school.ru   */
/*                                                                            */
/*   Created/Updated: 2021/05/02 16:52:54  /  2021/05/02 17:00:48 @cclarice   */
/*                                                                            */
/* ************************************************************************** */

#include "../xtox.h"

unsigned int	ft_strtoui(char *str)
{
	unsigned int	ret;

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
			return (0xffffffff)
		str++;
	}
	return (ret);
}
