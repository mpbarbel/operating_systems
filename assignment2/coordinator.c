#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>



int main(int argc, char** argv){

    __pid_t child_PID;
    int child_status;
    int return_code;

    for(int i = 2; i < argc; i++){
        child_PID = fork();

        if(child_PID > 0){
            printf("Coordinator: forked process with ID [%d]\n", child_PID);
            printf("Coordinator: waiting for process [%d]\n", child_PID);
            wait(&child_status);
            printf("Coordinator: child process [%d] returned %d\n", child_PID, WEXITSTATUS(child_status));

        }else if(child_PID == 0){
            execlp("./checker.o", argv[1], argv[i], NULL);

        } else{ 
            printf("Fork failed, returned status: %d\n", child_status);
            
        }
    
    
    }

}