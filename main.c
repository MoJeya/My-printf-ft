#include "ft_printf.h"

int	main(void)
{
	char	*str;
	int		len;
	int		lenOG;

	str = NULL;
	len = ft_printf("%s", str);
	printf("\n");
	lenOG = printf("%s", str);
	printf("\n");
	printf("MY: %d\nOG %d", len, lenOG);
	return (0);
}
