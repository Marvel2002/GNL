#include "libft.h"

void	ft_putstrtab(char **str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		ft_putendl(str[i]);
		i++;
	}
}
