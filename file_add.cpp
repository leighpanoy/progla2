#include <stdio.h>
using namespace std;
int main(){
    FILE *myFile;
    myFile = fopen("sample 1.txt", "r");

    int numberArray[5];
    int sum = 0;

    for ( int i = 0; i < 5; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }

    for (int i = 0; i < 5; i++){
        printf("Number is: %d\n\n", numberArray[i]);
    }
    
    for (int i = 0; i < 5 ; i++){
    	sum += numberArray[i]; 
	}
	
printf("The sum is: %d ",sum);
	
	return 0;
}
