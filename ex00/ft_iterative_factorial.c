/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:27:54 by ddogan            #+#    #+#             */
/*   Updated: 2023/09/16 15:36:41 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
		return (0);
	else
	{
		while (i <= nb)
		{
			j *= i;
			i++;
		}
		return (j);
	}
}
