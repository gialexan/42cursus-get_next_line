/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:34:18 by gialexan          #+#    #+#             */
/*   Updated: 2022/07/06 20:13:03 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *src)
{
	int		len;
	char	*dup;

	len = ft_strlen(src) + 1;
	dup = (char *) malloc (len * sizeof(char));
	if (!dup)
	{
		free (dup);
		return (NULL);
	}
	ft_strlcpy(dup, src, len);
	return (dup);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*aux;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	aux = (char *) malloc((s1_len + s2_len) + 1 * sizeof(char));
	if (!aux)
		return (NULL);
	ft_strlcpy(aux, s1, s1_len + 1);
	ft_strlcpy(aux + s1_len, s2, s2_len + 1);
	return (aux);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize)
	{
		while (i < dstsize -1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != (char)c)
		str++;
	if (*str == '\0' && c != '\0')
		return (0);
	return ((char *)str);
}
