#include"iostream"
using namespace std;

	int get_sum(int x,int y){
	return x+y;
}

int get_difference(int x,int y){
return x-y;	
}
int get_product(int x,int y){
	return x*y;	
}
int get_Quotient(int x,int y){
	return x/y;	
}
int main()
{
	int a,b;
	cout<<"Enter num 1:";
	cin>>a;
	cout<<"Enter num 2:";
	cin>>b;
	
	cout<<"Sum is:"<< get_sum(a,b)<<endl;
	
	cout<<"Difference is:"<< get_difference(a,b)<<endl;
	
	cout<<"Product is:"<< get_product(a,b)<<endl;
	
	cout<<"Quotient is:"<< get_Quotient(a,b)<<endl;
	
return 0;
	
}
