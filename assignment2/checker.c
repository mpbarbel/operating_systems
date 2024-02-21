#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void checker(char* []);

 int main(int argc, char* argv[]){

        checker(argv);
        return 0;
    };
    
void checker(char* args[]){
    int divisor = atoi(args[0]);
    int dividend = atoi(args[1]);
    printf("checker process [%i]: is Starting\n", getpid());

    if( divisor == 0){
        printf("Checker process [%d] failed, Division by 0 is not allowed \n", getpid());
    }
    else if(dividend % divisor == 0 && dividend != 0){
        printf("Checker process [%i]: %i *IS* divisible by %i\n", getpid(), dividend, divisor);
        printf("Checker process [%d]: Returning 1\n", getpid());
        exit(1);
    }

    else{
        printf("Checker process [%i]: %i *IS NOT* divisible by %i\n", getpid(), dividend, divisor);
        printf("Checker process [%d]: Returning 0\n", getpid());
        exit(0);
    }
}
