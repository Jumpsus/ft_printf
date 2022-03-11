/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:24:39 by pratanac          #+#    #+#             */
/*   Updated: 2022/03/11 10:35:17 by pratanac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_mem1(unsigned int num)
{
	int	count;

	count = 0;
	while (num > 9)
	{
		num = num / 10;
		count++;
	}
	count++;
	return (count);
}

char	*ft_utoa(unsigned int n)
{
	char	*str;
	int		len;

	len = ft_count_mem1(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = 0;
	while (num > 9)
	{
		str[--len] = (num % 10) + '0';
		num = num / 10;
	}
	str[--len] = num + '0';
	return (str);
}
