/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrepak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:29:13 by nrepak            #+#    #+#             */
/*   Updated: 2018/02/07 15:06:44 by nrepak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define CAST (f->hh || f->h || f->l || f->ll || f->j || f->z)

# include "./libft/libft.h"
# include <stdarg.h>

typedef	struct	s_flags
{
	int		slash;
	int		minus;
	int		plus;
	int		space;
	int		zero;
	int		width;
	int		precision;
	int		zero_precision;
	int		hh;
	int		h;
	int		l;
	int		ll;
	int		j;
	int		z;
}				t_flags;

int			ft_printf(const char *str, ...);
int			ft_percentage(t_flags *f);
int			ft_character(va_list lst, char c, t_flags *f);
int			ft_string(va_list lst, char c, t_flags *f);
int 		ft_wide_string(va_list lst, t_flags *f);
int			ft_collect_for_wide_string(wchar_t *a, t_flags *f);
int			ft_hexadecimal(va_list lst, char c, t_flags *f);
int			ft_octal(va_list lst, char c, t_flags *f);
int			ft_unsigned_decimal(va_list lst, char c, t_flags *f);
int			ft_decimal(va_list lst, char c, t_flags *f);
int			ft_pointer(va_list lst, t_flags *f);
int			ft_check_width(const char *str);
int			ft_check_precision(const char *str);
void		ft_zero_precision(const char *str, t_flags *f);
int			ft_conversions(char c);
int			ft_is_conversions(const char *str);
void		ft_zero_to_all(t_flags *f);
void		ft_collect_flags(char c, t_flags *f,
							const char ***str, int n_width);
int			ft_plus_space(intmax_t i, t_flags *f);
void		ft_find_cast_flags(const char *str, t_flags *f);
intmax_t	ft_cast_to_signed(intmax_t i, t_flags *f);
uintmax_t	ft_cast_to_unsigned(uintmax_t i, t_flags *f);
int			ft_is_flags(char c);

#endif
