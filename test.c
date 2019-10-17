/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:30:20 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/17 10:30:20 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main()
{
    char ch = 'A';
    ft_putchar(ft_tolower(ch));
    if (ft_isalnum(ch))
        ft_putendl("ch is alnum");
    if (!ft_isdigit(ch))
        ft_putendl("ch is not digit");
    if (ft_isalpha(ch))
        ft_putendl("ch is alpha");
    if (ft_isascii(ch))
        ft_toupper(ch);
    if (ft_isprint(ch))
        ft_putchar(ch);
    ft_putchar('\n');
}
