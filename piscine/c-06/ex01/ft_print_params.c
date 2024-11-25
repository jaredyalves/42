#include <unistd.h>

int	main(int argc, char **argv)
{
	argv++;
	while (argc - 1)
	{
		while (**argv)
		{
			write(1, &(**argv), 1);
			(*argv)++;
		}
		write(1, "\n", 1);
		argv++;
		argc--;
	}
	return (0);
}
