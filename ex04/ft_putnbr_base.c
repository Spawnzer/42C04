/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:10:10 by adubeau           #+#    #+#             */
/*   Updated: 2021/02/22 16:38:34 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void  ft_putnbr_base(int nbr, char *base)
{
  int i;
  int j;
  int rem;
  int temp;
  char res[1000];

  temp = 0;
  i = 0;
  j = 0;

  while (base[i])
    i++;

  while (nbr != 0)
  {
      temp = nbr % i;
     res[j++] = base[temp];
      nbr = nbr / i;
    }
  while (j > 0)
  {
    write(1, &res[j-1], 1);
    j--;
  }

  }

int main() {
 int nbr;
 char hexa[] = "0123456789ABCDEF";
 char octa[] = "poneyvif";
 char binaire[] = "1";
char nl;
nl = 10;
 nbr = 347549;

 ft_putnbr_base(nbr, binaire);
 write(1, &nl, 1);
 ft_putnbr_base(nbr, hexa);
 write(1, &nl, 1);
	ft_putnbr_base(nbr, octa);
}
