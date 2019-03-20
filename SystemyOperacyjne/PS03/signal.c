#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

volatile sig_atomic_t keep_going = 1;

void handler(int signum){
    printf("signal!\n");
    keep_going = 0;
    }

int main(void){
    signal(SIGINT, handler);
    while(keep_going)
    {
        printf("working...\n");
        sleep(1);
    }
    return 0;
}