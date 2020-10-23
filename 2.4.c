#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>

void childTask(){
	printf("saya proses anak\n");
	}

void parentTask(){
	printf("saya proses parent\n");
	}

int main(void){
	for(int i = 1; i < 5; i++){
	char name[50];
	pid_t pid = fork();

	printf("Please enter your name :\n");
	scanf("%s",&name);
	printf("Your name is %s",name);

	if(pid == 0){
		childTak();
		exit(EXIT_SUCCESS);
		}
	else{
		parentTask();
		wait(NULL);
		printf("Job is done.\n")
		}
	}
	return EXIT_SUCCESS;
}

