#include<iostream>
#include<iostream>
#include<string>
using namespace std;

class user{
	public:
		string name;
		int id_num;  
};

class student: public user{
	public:
		int num_of_subjects;
		int num_books;	
};

class Prof: public user{
	public:
		int tin;
};
class Staff: public user{
	public:
		int sss;
};

int main(){
	
	student stud[3];
	Prof prof[3];
	Staff staff[3];	
	
	for(int i=0;i<3;i++){
		cout<<i+1 <<".Enter Student Name:";
		cin>> stud[i].name;
		cout<<"Enter Student ID Number:";
		cin>> stud[i].id_num;
		cout<<"Number Of Subjects:";
		cin>> stud[i].num_of_subjects;
		cout<< "Number Of Books:";
		cin>> stud[i].num_books;
		cout<<endl;
		
		cout <<"Enter Prof Name:";
		cin>> prof[i].name;
		cout<<"Enter Prof ID Number:";
		cin>> prof[i].id_num;
		cout<< "Enter TIN:";
		cin>> prof[i].tin;
		cout<<endl;
		
		cout <<"Enter Staff Name:";
		cin>> staff[i].name;
		cout<<"Enter Staff ID Number:";
		cin>> staff[i].id_num;
		cout<< "Enter SSS:";
		cin>> staff[i].sss;
		cout<<endl;
	}
	for(int i=0;i<3;i++){	
		cout <<i+1 << ".Student name: " << stud[i].name << endl;
		cout << "Student ID number: " << stud[i].id_num << endl;
		cout << "Student number of subjects: " << stud[i].num_of_subjects << endl;
		cout << "Student number of books: " << stud[i].num_books<<endl;
		cout<<endl;
		cout <<"Prof name: " << prof[i].name << endl;
		cout <<"Prof ID number: " << prof[i].id_num << endl;
		cout <<"Prof TIN: " << prof[i].tin<<endl;
		cout<<endl;
		cout <<"Staff name: " << staff[i].name << endl;
		cout <<"Staff ID number: " << staff[i].id_num << endl;
		cout <<"Staff SSS: " << staff[i].sss << endl;
	}
	return 0;	
}
