/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldank <ldank@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 01:52:38 by ldank             #+#    #+#             */
/*   Updated: 2026/09/16 18:58:11 by ldank            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}
/*#include <stdio.h>
int main()
{
	int x;
	int y;
	
	x= 20;
	y = 0;
	ft_ultimate_div_mod(&x, &y);
	printf("%d, %d", x, y);
}*/
