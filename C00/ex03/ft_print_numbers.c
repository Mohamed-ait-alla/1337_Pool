/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-all <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:41:58 by mait-all          #+#    #+#             */
/*   Updated: 2024/09/23 21:43:46 by mait-all         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void    ft_print_numbers(void)
{
    char    n;

    n = 48;
    while (n <= 57)
    {
        write(1, &n, 1);
        n++;
    }
}