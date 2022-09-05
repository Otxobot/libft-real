/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:24:05 by abasante          #+#    #+#             */
/*   Updated: 2022/09/05 14:17:04 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t  i;
    
    i = 0;
    while(i < n)
    {
        ((unsigned char*)s)[i] = 0;
        i++;
    }
}

/*int main (void)
{
    char str[50] = "this string.h library function";
    ft_bzero(str, 1);
    for (int x = 0; x < 50; x++)
        printf("%c", str[x]);
    
    return(0);
}
*/