/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <@students.42wolfsburg.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 03:38:39 by avitolin          #+#    #+#             */
/*   Updated: 2022/08/02 03:50:10 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../c_02.h"

int		ft_str_is_numeric(const char *str)
{
	while (*str != '\0')
	{
		if(*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
