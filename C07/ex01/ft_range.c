/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-all <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:25:01 by mait-all          #+#    #+#             */
/*   Updated: 2024/09/25 22:36:28 by mait-all         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>

int     *ft_range(int min, int max)
{
	int     *range;
	int	    size;
	int	    i;

	if (min >= max)
		return (NULL);
	i = 0;
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (!range)
		return (NULL);
	while (i < size)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}