/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:21:46 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/03 22:25:46 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	h;
	int	i;
	int	j;
	int	k;

	h = '0';
	while (h <= '9')
	{
		i = '0';
		while (i <= '9')
		{
			j = '0';
			while (j <= '9')
			{
				k = '0';
				while (k <= '9')
				{
					if ((i + h * 10) < (k + j * 10))
					{
						ft_putchar(h);
						ft_putchar(i);
						ft_putchar(' ');
						ft_putchar(j);
						ft_putchar(k);
						if (!(h == '9' && i == '8' && j == '9' && k == '9'))
						{
							ft_putchar(',');
							ft_putchar(' ');
						}
					}
					k++;
				}
				j++;
			}
			i++;
		}
		h++;
	}
}
