/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:24:39 by pratanac          #+#    #+#             */
/*   Updated: 2022/03/09 19:59:47 by pratanac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_mem3(long long unsigned int num)
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

char	*ft_ptoa(long long unsigned ptr)
{
	long long unsigned int	num;
	char					*str;
	int						len;

	num = (long long unsigned int)ptr;
	len = ft_count_mem3(num);
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
