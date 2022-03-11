/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:09:38 by pratanac          #+#    #+#             */
/*   Updated: 2022/03/10 18:29:53 by pratanac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

void	ft_to_upper_2(unsigned int i, char *c)
{
	i = 0;
	if (*c >= 'a' && *c <= 'z')
		*c = *c + 'A' - 'a';
	return ;
}

int	print_ptr(unsigned long long ptr)
{
	char	*str;
	int		len;

	str = ft_ptoa((unsigned long long int) ptr);
	len = print_str("0x");
	len = print_str(str);
	free(str);
	return (len + 2);
}
