#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>

volatile sig_atomic_t keep_going = 1;

void handler(int signum){
    printf("signal!\n");
    if (signum==SIGQUIT)
    {
        keep_going = 0;
        syslog(LOG_INFO,"Handled signal, now closing program");
    }
    
    }

int main(void){
    signal(SIGINT, handler);
    syslog(LOG_INFO,"Working program");
    while(keep_going)
    {
        printf("working...\n");
        sleep(1);
    }
    closelog();
    return 0;
}