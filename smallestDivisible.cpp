#include<iostream>
using namespace std;
int main(){
int num=1;
while(1){
	if(num%2==0 && num%3==0 && num%5==0 && num%8==0 && num%12==0 && num%13==0 && num%15==0){
		cout<< num;
		break;
	}
	num++;

}

return 0;

}
