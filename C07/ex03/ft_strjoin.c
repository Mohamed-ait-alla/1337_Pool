/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-all <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:39:37 by mait-all          #+#    #+#             */
/*   Updated: 2024/09/25 22:53:03 by mait-all         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>

int     count_word_len(char *s)
{
	int     i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*count_whole_len(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*p;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += count_word_len(strs[i]);
		i++;
	}
	len += count_word_len(sep) * size - 1;
	if (size <= 0)
		len = 1;
	p = (char *)malloc(sizeof(char) * len);
	if (!p)
		return (NULL);
	return (p);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		x;
	char	*p;

	i = 0;
	j = 0;
	x = 0;
	p = count_whole_len(size, strs, sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			p[x++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			p[x++] = sep[j++];
		i++;
	}
	p[x] = '\0';
	return (p);
}