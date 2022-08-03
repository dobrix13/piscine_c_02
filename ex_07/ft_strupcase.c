/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <@students.42wolfsburg.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:39:07 by avitolin          #+#    #+#             */
/*   Updated: 2022/08/02 14:48:07 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_lower(char c);
{
	return (c > 'a' && c < 'z' ? 1 : 0);
}

char *ft_strupcase(char *str)
{
	
	
	while (*str != '\0')
	{
		if (ft_is_lower(*str))
			*str -= 32;
	}
	return (str);
}