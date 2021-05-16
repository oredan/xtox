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
/*   ft_itoa.c                                cclarice@student.21-school.ru   */
/*                                                                            */
/*   Created/Updated: 2021/05/09 15:04:24  /  2021/05/09 15:06:27 @cclarice   */
/*                                                                            */
/* ************************************************************************** */

#include "../xtox.h"

short	ft_intlen(int i)
{
	short	c;

	c = 1;
	if (i <= -1 && ++c)
		i *= -1;
	while (i >= 10 && ++c)
		i /= 10;
	return (c);
}

char	*ft_itoa(int i)
{
	char		*ret;
	short		len;

	len = ft_intlen(i);
	ret = (char *)malloc(sizeof(char) * len + 1);
	if (ret)
		ret[len--] = 0;
	if (ret && i >= 0)
	{
		while (len >= 0)
		{
			ret[len--] = i % 10 + '0';
			i /= 10;
		}
	}
	else if (ret)
	{
		ret[0] = '-';
		while (len >= 1)
		{
			ret[len--] = (i % 10) * -1 + '0';
			i /= 10;
		}
	}
	return (ret);
}