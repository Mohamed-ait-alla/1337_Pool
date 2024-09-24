/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-all <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:35:31 by mait-all          #+#    #+#             */
/*   Updated: 2024/09/24 12:37:45 by mait-all         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

char    *ft_strcpy(char *dest, char *src)
{
    int     i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}