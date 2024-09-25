/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-all <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:06:03 by mait-all          #+#    #+#             */
/*   Updated: 2024/09/25 22:13:39 by mait-all         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

int     ft_strcmp(char *s1, char *s2)
{
	int     i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void    ft_swap(char **s1, char **s2)
{
    char    *tmp;

    tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write (1, "\n", 1);
}

int     main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (++i < argc)
	{
		j = i;
		while (++j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
				ft_swap(&argv[i], &argv[j]);
		}
	}
	while (--argc > 0)
		ft_putstr(argv[argc]);
    return (0);
}