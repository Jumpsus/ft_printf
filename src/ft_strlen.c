/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:13:40 by pratanac          #+#    #+#             */
/*   Updated: 2022/03/09 18:27:20 by pratanac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *input)
{
	size_t	len;

	len = 0;
	while (input[len] != '\0')
	{
		len++;
	}
	return (len);
}