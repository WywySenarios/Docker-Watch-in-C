#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int done;

void handle_sigterm(int signal_num)
{
    printf("Received SIGTERM. Attempting to exit now...\n");
    done = 1;
}

int main()
{
    done = 0;

    signal(SIGTERM, handle_sigterm);

    printf("The program has started!\n");
    fflush(stdout);

    while (!done)
    {
        printf("I'm in the while loop!\n");

        fflush(stdout);
        sleep(1);
    }
}