/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <@students.42wolfsburg.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 21:50:38 by avitolin          #+#    #+#             */
/*   Updated: 2022/08/04 21:52:56 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z' ? 1 : 0);
}

char *ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_upper(str[i]))
			str[i] = (str[i] + 32);
		i++;
	}
	return (str);
}
