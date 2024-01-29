/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariverg <mariverg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:09:58 by mariverg          #+#    #+#             */
/*   Updated: 2024/01/29 14:12:01 by mariverg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprinft.h"

//para imprimir el %c
int	ft_putchar(char format)
{
	write(1, &format, 1);
    return (1);
}
/* int main()
{
    ft_putchar('c');
    return (0);
} */
