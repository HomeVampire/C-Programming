#include <stdio.h>
#include <string.h>



void anagram(char a[], char b[]){
    	char temp;
	int i, j;
///////////////////////////////////////////////////////Sort 1st string in alphabetic order
	int n = strlen(a);
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
///////////////////////////////////////////////////////Sort 2nd string in alphabetic order
	n = strlen(b);
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (b[i] > b[j]) {
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
///////////////////////////////////////////////////////If both are equal then they are anagram
	if (strcmp(a, b) == 0) { 
        	printf("They are Anagram"); 
    	} 
    	else { 
        	printf("They are not Anagram"); 
    	}
}

int main()
{
	char a[100], b[100];
	int i, n;
    
	printf("Enter 1st String= ");
	gets(a);
	printf("Enter 2nd String= ");
	gets(b);

	printf("1st String is =");
	puts(a);
	printf("2nd String is = ");
	puts(b);	
	

	if(strlen(a)==strlen(b)){	//If length of the string are not equal they are not Anagram
		n = strlen(a);	//Making all character into lower Case
		for(i=0;i<n;i++){
			if(a[i]>='A' && a[i]<='Z'){
				a[i]=a[i]+32;
			}
		}

		n = strlen(b);  //Making all character into lower Case
		for(i=0;i<n;i++){
			if(b[i]>='A' && b[i]<='Z'){
				b[i]=b[i]+32;
			}
		}

		anagram(a, b); //Call Anagram function
	}
	else{
		printf("They are not Anagram");
	}

	
    return 0;
}
