
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char username[20];
	char userpassword[20];
	int i;
	
	printf("Enter the User Name : ");
	gets(username);
	
	printf("Enter the Password : ");
	gets(userpassword);
	
	printf("\n\n****\tEnter Any Key to Continue\t****");
	getch();
	
	if(!strcmp(username, "Joel") && !strcmp(userpassword, "joel123")){
		printf("\n\n****\tLogin Successful\t****");
	}else{
		printf("\n\n****\tDetail Entered are Incorrect. Please Enter Details Again!!\t****");
	}
	return 0;
}