/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-all <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:31:39 by mait-all          #+#    #+#             */
/*   Updated: 2024/09/25 22:35:13 by mait-all         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>

int     ft_ultimate_range(int **range, int min, int max)
{
	int     *tmp;
	int     size;
	int     i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	tmp = (int *)malloc(sizeof(int) * size);
	if (!tmp)
	{
		*range = (NULL);
		return (-1);
	}
	while (i < size)
		tmp[i++] = min++;
	*range = tmp;
	return (i);
}