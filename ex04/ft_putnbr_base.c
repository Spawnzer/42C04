/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:10:10 by adubeau           #+#    #+#             */
/*   Updated: 2021/02/23 14:51:23 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (base[i])
	{
		while (base[j])
		{
			if (i != j)
			{
				if (base[i] == base[j])
					return (0);
			}
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putchar(int j, char *res)
{
	while (j > 0)
	{
		write(1, &res[j - 1], 1);
		j--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	char		res[100];
	int			i;
	int			j;
	int			temp;
	long int	br;

	br = nbr;
	i = 0;
	j = 0;
	if (nbr < 0)
		br = br * -1;
	if (ft_check_base(base))
	{
		while (base[i])
			i++;
		while (br != 0)
		{
			temp = br % i;
			res[j++] = base[temp];
			br = br / i;
		}
		if (nbr < 0)
			res[j++] = '-';
		ft_putchar(j, res);
	}
}
