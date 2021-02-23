/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:38:32 by adubeau           #+#    #+#             */
/*   Updated: 2021/02/23 14:29:27 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_space(char c)
{
	if (c == '\f' || c == 32 || c == '\n' || c == '\r' ||
			c == '\t' || c == '\v')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int res;

	i = 0;
	res = 0;
	neg = 1;
	while (ft_is_space(str[i]) || str[i] == '+' ||
			str[i] == '-' || (str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			neg = neg * -1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				res = res * 10 + (str[i] - '0');
				i++;
			}
			res = res * neg;
			return (res);
		}
		i++;
	}
	return (res);
}
