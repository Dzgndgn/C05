/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:32:07 by ddogan            #+#    #+#             */
/*   Updated: 2023/09/14 04:44:12 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	sonuc;

	sonuc = 1;
	i = 1;
	if (nb == 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	else if (power < 0)
		return (0);
	else
	{
		while (i <= power)
		{
			sonuc *= nb;
			i++;
		}
	}
	return (sonuc);
}
