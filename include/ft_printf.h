/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:47:56 by pratanac          #+#    #+#             */
/*   Updated: 2022/03/10 01:48:22 by pratanac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_max(int a, int b);
int		ft_min(int a, int b);
void	ft_to_upper_2(unsigned int i, char *c);
int		ft_printf(const char *str, ...);
int		print_str(char *str);
int		print_per(void);
int		print_char(int c);
int		print_ptr(unsigned long long ptr);
int		print_num(int num);
int		print_unsign(int type, unsigned int u);
#endif
