#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (int argc,char * argv[]){
char something[20],some[90];

int size=strlen(argv[1])/4;
char arr[size+1][5];

for(int i =strlen(argv[1])-1 ; i>=0 ;){
	for(int j=0 ; j<=size ; j++){
		for(int k=0;k<=4;k++){
			if(k==4){
				arr[j][k]='\0';	
			}
			else{
				arr[j][k]=argv[1][i];
			i--;
			}
		}
	}
}


//output

for (int i=0;i<=size;i++){
if(arr[i][0]=='\0'){continue;}
printf("\n%s",arr[i]);

}
return 0;
}
