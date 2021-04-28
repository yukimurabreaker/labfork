#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
	
	void nameUser();
	int main(void){
	
	for(int i = 1;i < 5; i++){
	pid_t pid = fork();
	
	

		if(pid == 0){
		char name[10];
		printf("Enter your name pls: ");
		scanf("%s",name);
		printf("Your name is %s.\n",name);
		}

		else if(pid != 0){

			wait(NULL);
		return EXIT_SUCCESS;
		}
		else {
		return EXIT_FAILURE;
		}
	}	

		nameUser();
		return EXIT_SUCCESS;

	}
	
	void nameUser(){
	
		printf("Job is done.\n");

	}

