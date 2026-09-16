/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldank <ldank@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 03:31:48 by ldank             #+#    #+#             */
/*   Updated: 2026/09/16 18:59:03 by ldank            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while(i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size -1 -i];
		tab[size -1 -i] = temp;
		i++;
	}
}


/*#include <stdio.h>
int	main(void)
{
	int	tab[] = {1,2,3,4,8,5};
	int a = 0;
	
	ft_rev_int_tab(tab, 6);
	
	while(a < 6)
	{
		printf("%d ",tab[a]);
		a++;
	}
}*/