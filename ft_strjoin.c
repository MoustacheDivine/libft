/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <gbruscan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:45:53 by gbruscan          #+#    #+#             */
/*   Updated: 2024/10/14 11:45:54 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	int		i;
	int		j;

	i = 0;
	j = 0;
	mem = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!mem)
		return (NULL);
	while (s1[j])
		mem[i++] = s1[j++];
	j = 0;
	while (s2[j])
		mem[i++] = s2[j++];
	mem[i] = '\0';
	return (mem);
}
