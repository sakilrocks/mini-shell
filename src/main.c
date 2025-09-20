#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

int main() {
    char input[MAX_INPUT];
    char *args[MAX_ARGS];
    pid_t pid;
    int status;

    printf("Welcome to Mini Shell! Type 'exit' to quit.\n");

    while (1) {
        printf("mini-shell> ");
        fflush(stdout);

        if (fgets(input, sizeof(input), stdin) == NULL) {
            printf("\n");
            break;
        }

        // Remove trailing newline
		
        if (input[strlen(input) - 1] == '\n')
            input[strlen(input) - 1] = '\0';

        if (strcmp(input, "exit") == 0) {
            printf("Bye!\n");
            break;
        }

        parse_input(input, args);

        if (args[0] == NULL) {
            continue;   // empty command
        }

        pid = fork();
        if (pid < 0) {
            perror("fork failed");
            continue;
        } else if (pid == 0) {
            if (execvp(args[0], args) == -1) {
                perror("mini-shell");
            }
            exit(EXIT_FAILURE);
        } else {
            waitpid(pid, &status, 0);
        }
    }

    return 0;
}
