#include<stdio.h>
#include<string.h>
int str_(char* copi, char* sub_str){
	if(strlen(copi)!=(strlen(sub_str)-1))
				return 0;
			else{
				for(int k=0;k<strlen(copi);k++){
					if(copi[k]!=sub_str[k])
						return 0;
				}
				return 1;
			}

}

int main(){
	char string[100];
	char sub_str[100];
	char copi[100];
	int n1, n2;
	int flag=0;
	printf("Enter the string...\n");
	fgets(string,100,stdin);
	
	
	printf("Enter the sub-string...\n");
	fgets(sub_str,100,stdin);
	
	n1=strlen(string);
	n2=strlen(sub_str);
	
	if(n2>n1){
		printf("Wrong sub-string\n");
	}
	else{
		for(int i=0 ;i<=(n1-n2) ;i++){
			int k=0;
			for(int j=i;k<n2-1;k++){
				copi[k]=string[j];
				j++;
			}
			copi[k++]= '\0';

			int temp=str_(copi, sub_str); //Checking Strings are equal or

			if(temp==1){
				printf("Strings are matched\n");
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("Sorry we cannot find the sub-string\n");
		}
	}
	return 0;
}
