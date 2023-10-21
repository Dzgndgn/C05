/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:44:57 by ddogan            #+#    #+#             */
/*   Updated: 2023/09/14 04:44:34 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	sonuc;

	sonuc = 1;
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
		if (power > 0)
			sonuc = nb * ft_recursive_power(nb, power - 1);
	}
	return (sonuc);
}
