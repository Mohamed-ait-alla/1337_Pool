/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-all <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:10:55 by mait-all          #+#    #+#             */
/*   Updated: 2024/09/24 13:13:59 by mait-all         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

char	*ft_lowercase(char *str)
{
	int     i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int     check;
	int     i;

	ft_lowercase(str);
	i = 0;
	check = 1;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (check == 1)
			{
				str[i] -= 32;
				check = 0;
			}
		}
		else if (str[i] >= 48 && str[i] <= 57)
			check = 0;
		else
			check = 1;
		i++;
	}
	return (str);
}