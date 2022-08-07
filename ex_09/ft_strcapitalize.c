/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <@students.42wolfsburg.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 22:04:10 by avitolin          #+#    #+#             */
/*   Updated: 2022/08/05 00:06:18 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_upperc(char c)
{
	return (c >= 'A' && c <= 'Z' ? 1 : 0);
}

int		ft_is_delimiter(char c)
{
	return ((c >= 32 && c <= 47) ||(c >= 58 && c <= 63) || (c == 126) ? 1 : 0);
}

int		ft_is_exception(char c)
{
	return (c >= 35 && c <= 38 ? 1 : 0);
}

int		ft_is_lowerc(char c)
{
	return (c >= 'a' && c <= 'z' ? 1 : 0);
}

/*
**	+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+-+-+-+--+-+-+-+-+-+-+-+-+-+-+-+
**	decimal values to be used
**	numbers = 48 to 57 
**	delimiters = (32 to 47) + (58 to 63)
**	tilda = 126
**	35 - 38 (exception)
**	+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+-+-+-+--+-+-+-+-+-+-+-+-+-+-+-+
*/

void ft_capitalize_word(char *start, char *end)
{
	if (ft_is_lowerc(start[0]))
	{
		start[0] = start[0] - 32;
	}
	while ( start != end)
	{
		if(ft_is_upperc(start[1]))
		{
			start[1] = start[1] + 32;
		}
		start++;
	}

}

char *ft_strcapitalize(char *str)
{
	char	*start;
	char	*end;
	int		i;

	i = 0;
	start = str;
	end = start;
	while (str[i] != '\0')
	{
		if (ft_is_delimiter(str[i]) && !ft_is_exception(str[i]))
		{
			end = &str[i];
			ft_capitalize_word(start, end);
			if (str[i] != '\0')
			start = end +1;
		}
		i++;
	}
	if (str[i] == '\0')
		{
			end = &str[i];
			ft_capitalize_word(start, end);
		}
	return(str);
}
