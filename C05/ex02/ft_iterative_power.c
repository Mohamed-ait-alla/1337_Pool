/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-all <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:45:38 by mait-all          #+#    #+#             */
/*   Updated: 2024/09/25 11:49:28 by mait-all         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int     ft_iterative_power(int nb, int power)
{
	int     pow;

	pow = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		pow *= nb;
		power--;
	}
	return (pow);
}