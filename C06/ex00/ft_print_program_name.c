/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-all <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:08:14 by mait-all          #+#    #+#             */
/*   Updated: 2024/09/25 19:20:54 by mait-all         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

int     main(int argc, char **argv)
{
	int     i;

	i = 0;
	if (argc >= 1)
	{
		while (argv[0][i])
		{
			write(1, &argv[0][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}