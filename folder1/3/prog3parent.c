#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
    printf("MESSAGE FROM prog3parent.c\n");
    printf("PID of old process is: %d\n", getpid());
    char *args[] = {"Hello", "Man", NULL};
    execv("./prog3child.c", args);
    return 0; 
}