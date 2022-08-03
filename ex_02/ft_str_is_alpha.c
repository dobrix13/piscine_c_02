/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <@students.42wolfsburg.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 03:19:37 by avitolin          #+#    #+#             */
/*   Updated: 2022/08/02 03:35:00 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../c_02.h"

int	ft_str_is_alpha(const char *str)
{
	while (*str != '\0')
	{
		if((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
			return (0);
		str++;
	}
	return (1);
}