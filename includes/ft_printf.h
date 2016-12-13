/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csummers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 23:19:29 by csummers          #+#    #+#             */
/*   Updated: 2016/11/27 23:19:30 by csummers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

# define LLONG_MAX 9223372036854775807
# define LLONG_MIN -9223372036854775807
# define F(x) (x=='-'||x=='+'||x==' '||x=='0'||x=='#')
# define L(x) (x=='h'||x=='l'||x=='j'||x=='z')
# define SN(x) (x=='d'||x=='i')
# define UN(x) (x=='o'||x=='u'||x=='x'||x=='X'||x=='b'||x=='p')
# define CAP(x) (x=='D'||x=='O'||x=='U'||x=='S'||x=='C')
# define NUM(x) (x=='d'||x=='i'||x=='o'||x=='u'||x=='x'||x=='X'||x=='b'||x=='p')
# define STR(x) (x=='s'||x=='c')
# define HASH(x) (x=='o'||x=='x'||x=='X'||x=='p')

typedef struct	s_flag
{
	char		c;
	char		len_mod;
	char		*output;
	int			f_wide;
	wchar_t		*woutput;
	size_t		output_len;
	size_t		woutput_len;
	size_t		wide_dims_adj;
	int			f_ascii;
	int			f_width;
	size_t		width;
	int			f_prec;
	size_t		prec;
	int			f_minus;
	int			f_plus;
	int			f_space;
	int			f_zero;
	int			f_hash;
}				t_flag;

int				ft_printf(const char *format, ...);
void			pf_get_flag_info(const char **format, t_flag *flag);
void			pf_get_conv_spec(const char **format, t_flag *flag);
void			pf_conv_s_num(t_flag *flag, intmax_t n);
void			pf_conv_u_num(t_flag *flag, uintmax_t n);
void			pf_conv_char(t_flag *flag, int n);
void			pf_conv_wchar(t_flag *flag, wchar_t n);
void			pf_conv_str(t_flag *flag, char *s);
void			pf_conv_wstr(t_flag *flag, wchar_t *s);
char			*pf_imtoa_base(intmax_t im, uintmax_t um,
								unsigned int base, int c);
size_t			pf_wstrlen(wchar_t *s);
size_t			pf_wlen(wchar_t *s);
size_t			pf_wide_dims_adj(t_flag *flag);
int				pf_is_ascii(wchar_t *s);
void			pf_apply_width(t_flag *flag);
void			pf_print_width(t_flag *flag);
void			pf_print_many_chars(char c, size_t n);
void			pf_printer(char *output, wchar_t *woutput, size_t len);

int				g_fd;
int				g_ret;
va_list			g_ap;

#endif
