/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-all <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:13:39 by mait-all          #+#    #+#             */
/*   Updated: 2024/09/24 19:15:47 by mait-all         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

char    *ft_strstr(char *str, char *to_find)
{
    int		        i;
	int             j;
	char    *p;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			p = &str[i];
			while (str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (p);
				j++;
			}
		}
		i++;
	}
	return (0);
}