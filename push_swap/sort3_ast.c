/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ast.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:20:06 by aikram            #+#    #+#             */
/*   Updated: 2023/01/10 09:20:06 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_one(t_ps *ps)
{
	int	i;

	i = -1;
	while (++i < ps->l)
	{
		if ((ps->sta[ps->a] >> ps->j) & 1)
			rot(ps->sta, ps->l, ps->a, 'a');
		else
			push_b(ps);
	}
}

void	b_one(t_ps *ps)
{
	int	i;

	i = ps->b - 1;
	while (++i < ps->l)
		push_a(ps);
}
