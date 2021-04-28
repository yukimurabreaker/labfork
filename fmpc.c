#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

	void childTask(){
		printf("Salam, saya anak yer\n");
	}

	void parentTask(){
		printf("Salam, saya bapak dia yer\n");
	}

	int main(void){
		pid_t pid = fork();
		
			if(pid == 0){
				childTask();
				exit(EXIT_SUCCESS);
		}

			else if(pid >0){
				wait(NULL);
				parentTash();
		}

			else {
				printf("Unable to create child process.");
			}

				return EXIT_SUCCESS;
		}

