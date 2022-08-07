/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_02_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <@students.42wolfsburg.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 02:09:32 by avitolin          #+#    #+#             */
/*   Updated: 2022/08/05 00:08:55 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./c_02.h"
#include "../c_00/ex00.h"
#define string char *

int	main (void)
{
	ft_putstr("\033[32m\n+-+-+-+-+-[=:=:=:=: Test ex00 =:=:=:=:]-+-+-+-+-+\033[0m");
	ft_putstr("\033[33m\n------------------- ft_strcpy -------------------\n\n\033[0m");

	int		a, b;
	string	src = " ABCDEF abcdef 0123459";
	const string	src_2 = "42";

	b = 0;
	string dest_ex_00 = (char *)malloc(ft_strlen((string)src) * sizeof(char) + 1);
	ft_strcpy(dest_ex_00, src);
	ft_putstr(dest_ex_00);
	free(dest_ex_00);
	ft_putchar('\n');
	ft_putstr("\033[32m\n+-+-+-+-+-[=:=:=:=: Test ex01 =:=:=:=:]-+-+-+-+-+\033[0m");
	ft_putstr("\033[33m\n------------------- ft_strncpy ------------------\n\n\033[0m");
	string dest_ex_01 = (char *)malloc(ft_strlen((string)src) * sizeof(char) + 1);
	ft_strncpy(dest_ex_01, src, 10);
	ft_putstr(dest_ex_01);
	ft_putchar('\n');
	ft_putstr("\033[32m\n+-+-+-+-+-[=:=:=:=: Test ex02 =:=:=:=:]-+-+-+-+-+\033[0m");
	ft_putstr("\033[33m\n--------------- ft_str_is_alpha -----------------\n\n\033[0m");
	a = ft_str_is_alpha(src);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putstr("\033[32m\n+-+-+-+-+-[=:=:=:=: Test ex03 =:=:=:=:]-+-+-+-+-+\033[0m");
	ft_putstr("\033[33m\n-------------- ft_str_is_numeric ----------------\n\n\033[0m");
	a = ft_str_is_numeric(src);
	b = ft_str_is_numeric(src_2);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	ft_putchar('\n');
	ft_putstr("\033[32m\n+-+-+-+-+-[=:=:=:=: Test ex04 =:=:=:=:]-+-+-+-+-+\033[0m");
	ft_putstr("\033[33m\n-------------- ft_str_is_lowercase ----------------\n\n\033[0m");
	a = ft_str_is_lowercase(src);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putstr("\033[32m\n+-+-+-+-+-[=:=:=:=: Test ex05 =:=:=:=:]-+-+-+-+-+\033[0m");
	ft_putstr("\033[33m\n-------------- ft_str_is_uppercase ----------------\n\n\033[0m");
	a = ft_str_is_uppercase(src);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putstr("\033[32m\n+-+-+-+-+-[=:=:=:=: Test ex06 =:=:=:=:]-+-+-+-+-+\033[0m");
	ft_putstr("\033[33m\n-------------- ft_str_is_printable ----------------\n\n\033[0m");
	a = ft_str_is_printable(src);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putstr("\033[32m\n+-+-+-+-+-[=:=:=:=: Test ex07 =:=:=:=:]-+-+-+-+-+\033[0m");
	ft_putstr("\033[33m\n----------------  ft_strupcase ------------------\n\n\033[0m");
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	string dest_ex_07 = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
	dest_ex_07 = ft_strupcase(str);
	ft_putstr(dest_ex_07);
	ft_putchar('\n');
	ft_putstr("\033[32m\n+-+-+-+-+-[=:=:=:=: Test ex08 =:=:=:=:]-+-+-+-+-+\033[0m");
	ft_putstr("\033[33m\n----------------  ft_strlowcase ------------------\n\n\033[0m");
	string dest_ex_08 = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
	dest_ex_08 = ft_strlowcase(str);
	ft_putstr(dest_ex_08);
	ft_putchar('\n');
	ft_putstr("\033[32m\n+-+-+-+-+-[=:=:=:=: Test ex09 =:=:=:=:]-+-+-+-+-+\033[0m");
	ft_putstr("\033[33m\n--------------  ft_strcapitalize ----------------\n\n\033[0m");
	string dest_ex_09 = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
	dest_ex_09 = ft_strcapitalize(str);
	ft_putstr(dest_ex_09);
	ft_putchar('\n');
}
