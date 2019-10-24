/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:30:20 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/18 17:31:49 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void  ft_putstr(char const *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        write(1, &s[i], 1);
        i++;
    }
}

int     main()
{
    int i = 1;
    while (i-- > 0)
        ft_putstr("mo");
}
