#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		s;
	char	*new_str;

	i = ft_strlen(s1);
	s = 0;
	new_str = (char *)malloc(sizeof(new_str) * (i + 1));
	if (!(s1) || new_str == NULL)
		return (NULL);
	while (s1[s])
	{
		new_str[s] = s1[s];
		s++;
	}
	new_str[s] = '\0';
	return (new_str);
}
