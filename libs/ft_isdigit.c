/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:50:25 by mpapin            #+#    #+#             */
/*   Updated: 2025/01/25 17:05:36 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isdigit('5'));
// 	return (0);
// }
