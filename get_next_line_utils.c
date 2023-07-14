/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:21:10 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/14 20:40:27 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	unsigned int	i;

	i = 0;
	printf("string: %s\n", s);
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == '\0')
		return (NULL);
	return (&s[i]);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	longitud;

	longitud = ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	if (start > longitud)
	{
		substring = malloc(sizeof(char) * (1));
		if (!substring)
			return (NULL);
		substring[0] = '\0';
		return (substring);
	}
	if (start - len < len)
		len = longitud - start;
	substring = (char *)malloc(len + 1);
	if (!substring)
		return (NULL);
	while (i++ < start)
		s++;
	ft_strlcpy(substring, s, len + 1);
	return (substring);
}

char	*ft_strjoin(char *len_s1, char *len_s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!len_s1)
	{
		len_s1 = malloc(1 * sizeof(char));
		if (!len_s1)
			return (NULL);
		len_s1[0] = '\0';
	}
	str = malloc(sizeof(char) * ((ft_strlen(len_s1) + ft_strlen(len_s2)) + 1));
	if (!len_s1)
		return (free_storage(len_s1));
	i = -1;
	j = 0;
	if (len_s1)
		while (len_s1[++i] != '\0')
			str[i] = len_s1[i];
	while (len_s2[j] != '\0')
		str[i++] = len_s2[j++];
	str[ft_strlen(len_s1) + ft_strlen(len_s2)] = '\0';
	free(len_s1);
	return (str);
}

size_t	ft_strlcpy(char *dest, char *src, size_t destsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (destsize < 1)
		return (j);
	while (src[i] && i < destsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
