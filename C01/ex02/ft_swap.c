/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-all <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 23:32:00 by mait-all          #+#    #+#             */
/*   Updated: 2024/09/23 23:33:18 by mait-all         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

void    ft_swap(int *a, int *b)
{
    int     c;
    
    c = *a;
    *a = *b;
    *b = c;
}