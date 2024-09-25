/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-all <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:22:27 by mait-all          #+#    #+#             */
/*   Updated: 2024/09/24 23:26:17 by mait-all         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

int     check_error(char *base)
{
	char	*tmp;

	if (*base == '\0' || *(base + 1) == '\0')
		return (0);
	while (*base)
	{
		if (*base == '-' || *base == '+')
			return (0);
		tmp = base + 1;
		while (*tmp)
		{
			if (*tmp == *base)
				return (0);
			tmp++;
		}
		base++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		        i;
	int		        bl;
	long	n;
	char	r;

	i = 0;
	bl = 0;
	n = nbr;
	if (check_error(base) == 0)
		return ;
	while (base[bl])
		bl++;
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * (-1);
	}
	if (n >= bl)
		ft_putnbr_base(n / bl, base);
	r = base[n % bl];
	write(1, &r, 1);
}