/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:24:39 by pratanac          #+#    #+#             */
/*   Updated: 2022/03/11 10:35:01 by pratanac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_mem2(unsigned int num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		num = -1 * num;
		count++;
	}
	while (num > 15)
	{
		num = num / 16;
		count++;
	}
	count++;
	return (count);
}

char	*ft_htoa(unsigned int n)
{
	char	*str;
	int		len;

	len = ft_count_mem2(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = 0;
	while (num > 15)
	{
		if ((num % 16) > 9)
			str[--len] = (num % 16) - 10 + 'a';
		else
			str[--len] = (num % 16) + '0';
		num = num / 16;
	}
	if (num > 9)
		str[--len] = num - 10 + 'a';
	else
		str[--len] = num + '0';
	return (str);
}
