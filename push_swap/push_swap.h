/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:37:57 by aikram            #+#    #+#             */
/*   Updated: 2023/01/11 12:21:21 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct t_ps
{
	int	bk[4];
	int	bbk[10];

	int	*stb;
	int	*sta;
	int	a;
	int	b;
	int	m;
	int	flip;
	int	mdp;
	int	pdp;

	int	l;

	int	prh;
	int	ph;
	int	p;

	int	i;
	int	j;

	int	up;
	int	upos;
	int	dn;
	int	dpos;

}	t_ps;

void	push_swap(int *a, int l);

int		ft_not_atoi(char *str);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
void	*ft_calloc(size_t count, size_t size);
void	ft_spit(char const *s, char c, char **strr, int *i);

void	push_a(t_ps *ps);
void	push_b(t_ps *ps);
void	swat(int *a, int *b, char ab);
void	rot(int *a, int l, int start, char ab);
void	rrot(int *a, int l, int start, char ab);
void	repeat(int *a, int l, int s, int r);
void	rrepeat(int *a, int l, int s, int rr);

int		*two(int *a);
void	three(int *a, int l, int i);
void	four(int *a, int l, int i);
void	five(int *a, int l, int i);
void	sus(int *a, int l, int i);
void	sussy_baka(int *a, int l, int i, int *j);

int		median(int *a, int l);
void	big_boi(int *a, int l);

void	chkr_dup(int *i, int *ints);
void	dp(t_ps *ps, int *a, int l);
void	dp_one(t_ps *ps, int *a, int l);
void	dp_two(t_ps *ps, int *a, int l);
void	place_holderz(t_ps *ps, int m, int l);

void	sortz(t_ps *ps, int l);

void	a_one(t_ps *ps);
void	b_one(t_ps *ps);

#endif