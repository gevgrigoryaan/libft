/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gegrigor <gegrigor@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:27:29 by gegrigor          #+#    #+#             */
/*   Updated: 2026/01/30 20:50:11 by gegrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*sp;
	char	*ss;
	int		i;

	sp = (char *)s;
	ss = NULL;
	i = 0;
	while (sp[i])
	{
		if (sp[i] == (char)c)
			ss = &sp[i];
		i++;
	}
	if ((char)c == '\0')
		return (&sp[i]);
	return (ss);
}

int	main()
{
	char *a = ft_strrchr("123456789", 'a');
	printf("%s", a);
	printf("%s", strrchr("123456789", 'a'));
	return 0;
}
