/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 02:17:44 by ddogan            #+#    #+#             */
/*   Updated: 2023/09/14 16:21:00 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb < 0 || nb == 1)
	{
		return (0);
	}
	while (i <= (nb / i))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}