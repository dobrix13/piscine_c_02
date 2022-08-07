/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <@students.42wolfsburg.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:39:07 by avitolin          #+#    #+#             */
/*   Updated: 2022/08/04 21:44:59 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_lower(char c)
{
	return (c >= 'a' && c <= 'z' ? 1 : 0);
}

char *ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_lower(str[i]))
			str[i] = (str[i] - 32);
		i++;
	}
	return (str);
}
