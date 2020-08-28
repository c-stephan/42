#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		main(void)
{
	printf("-10000000000000000000000000000000 ?\n");
	printf("%s\n\n", ft_convert_base("   ---80000000", "0123456789ABCDEF", "01"));
	printf("-42 ? %s\n\n", ft_convert_base("  --+-vn", "poneyvif", "0123456789"));
	printf("a ? %s\n\n", ft_convert_base("z", "0123456789ABCDEF", "ab"));
	printf("b ? %s\n\n", ft_convert_base("", "0123456789ABCDEF", "ba"));
	printf("cool ?\n%s\n\n", ft_convert_base("pool", "vilponey", "geckodual"));
	printf("null ?\n%s\n\n", ft_convert_base("pool", "vilponey", "gecko\ndual"));
	printf("null ?\n%s\n\n", ft_convert_base("pool", "vilponey", "geckoduaal"));
}
