#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>

int main(){

    time_t raw_time = 0;
    struct tm  *pTime = NULL;
    bool isRunning = true;

    printf("   *** DIGITAL CLOCK***   \n\n");
    int i =0;
    while(isRunning){
        time(&raw_time);
        pTime = localtime(&raw_time);
        
        printf("\r%02d:%02d:%02d", (*pTime).tm_hour, pTime->tm_min, pTime->tm_sec);
        fflush(stdout);
        sleep(1);
        
    }
    return 0;
}