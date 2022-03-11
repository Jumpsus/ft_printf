/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:53:33 by pratanac          #+#    #+#             */
/*   Updated: 2022/02/28 13:28:15 by pratanac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *ptr, int value, size_t num)
{
	size_t			count;
	unsigned char	*s;
	unsigned char	c;

	s = (unsigned char *)ptr;
	c = (unsigned char)value;
	count = 0;
	while (count < num)
	{
		if (s[count] == c)
			return (&s[count]);
		count++;
	}
	return (NULL);
}
