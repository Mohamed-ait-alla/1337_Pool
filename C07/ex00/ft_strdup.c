/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-all <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:20:37 by mait-all          #+#    #+#             */
/*   Updated: 2024/09/25 22:36:42 by mait-all         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*copy;
	int		i;

	i = 0;
	while (str[i])
		i++;
	copy = (char *)malloc(sizeof(char) * (i + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (*str)
		copy[i++] = *str++;
	copy[i] = '\0';
	return (copy);
}