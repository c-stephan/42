char *ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	char *sep;
	int size;
	char **strs;
	char *ptr;
	sep = "1234";
	size = 4;
	strs = malloc(sizeof(char*) * size);
	*(strs + 0) = "Hello";
	*(strs + 1) = "";
	*(strs + 2) = "World";
	*(strs + 3) = "Again";
	ptr = ft_strjoin(size, strs, sep);
	printf("Hello12341234World1234Again ? %s\n\n", ptr);
}
