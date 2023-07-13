/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:21:10 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/13 17:32:56 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == '\0')
		return (NULL);
	return (&s[i]);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
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
	if (start - len < longitud)
		len = longitud - start;
	substring = (char *)malloc(len + 1);
	if (!substring)
		return (NULL);
	while (i++ < start)
		s++;
	ft_strlcpy(substring, len + 1);
	return (substring);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len_s1;
	size_t	len_s2;

	if (!(s1 && s2))
		return (ft_strdup(""));
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_str = malloc(len_s1 + len_s2 + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, len_s1 + 1);
	ft_strlcpy(new_str + len_s1, s2, len_s2 + len_s1 + 1);
	return (new_str);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	while (src[i] && i < destsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
