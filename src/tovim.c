#include <unistd.h>
#include <stdio.h>

main(argc, argv)
int    argc;
char   **argv;
{
	close(0);	/* close stdin */
	dup(2);		/* duplicate stdin from stderr */
	execvp(argv[1], argv + 1);
	perror("could not execute program");
}
