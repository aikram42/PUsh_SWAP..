/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortin_v3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:32:26 by aikram            #+#    #+#             */
/*   Updated: 2023/01/10 14:03:46 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortz(t_ps *ps, int l)
{
	int	amt[2];
	int	i;

	i = -1;
	amt[0] = l;
	amt[1] = 0;
	while (amt[0] > 0)
	{
		amt[0] >>= 1;
		amt[1]++;
	}
	ps->l = l;
	ps->j = -1;
	// for(int g = 0; g < ps->l; ++g)
	// 	printf("%d\n", ps->sta[g]);
	while (++i < amt[1])
	{
		++ps->j;
		a_one(ps);
		b_one(ps);
	}
	// for(int g = 0; g < ps->l; ++g)
	// 	printf("%d\n", ps->sta[g]);
}