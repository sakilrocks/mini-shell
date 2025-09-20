#include <string.h>
#include "../shell.h"

// parse input str into arr of args

void parse_input(char *input, char **args) {
	int i = 0;
	char *token = strtok(input, " \t\n");
	while (token != NULL && i < MAX_ARGS -1) {
		args[i++] = token;
		token = strtok(NULL, " \t\n");
	}
	args[i] = NULL;
}
