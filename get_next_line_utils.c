/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoloher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:39:43 by tsoloher          #+#    #+#             */
/*   Updated: 2023/12/09 12:39:25 by tsoloher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		size_total;
	char	*join;
	int		i;
	int		j;

	i = 0;
	size_total = ft_strlen(s1) + ft_strlen(s2);
	join = ft_calloc(size_total + 1, sizeof(char));
	if (!join || !s1 || !s2)
		return (NULL);
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	return (join);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*c;

	i = 0;
	c = (char *)s;
	while (i < n)
	{
		c[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;

	if (nmemb == 0 || size == 0)
	{
		str = malloc(1);
		str[0] = 0;
		return (str);
	}
	if (nmemb * size / size != nmemb)
		return (NULL);
	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (unsigned char)c)
	{
		s++;
	}
	if (*s == (unsigned char)c)
	{
		return ((char *)s);
	}
	else
		return (NULL);
}
