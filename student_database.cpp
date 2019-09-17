#include<bits/stdc++.h>
using namespace std;


class stud_info{
	string name;
	long int phno;
	int age;
	string email_id;
	
	public:
	
	    stud_info(){
	    	name="";
	    	phno=0;
	    	age=0;
	    	email_id="";
		}
		
		void add(){
				string name;
				long int phno;
				int age;
				string email_id;
				
			cout<<"Enter the name "<<endl;
			cin>>name;
			cout<<"Enter the age "<<endl;
			cin>>age;
			cout<<"Enter the phno "<<endl;
			cin>>phno;
			cout<<"Enter the email_id "<<endl;
			cin>>email_id;
			
			ofstream fout;
			fout.open("student.txt");
			
			if(fout){
				cout<<"file opened"<<endl;
				cout<<name;
				fout<<"\n";
				fout<<name<<" "<<age<<" "<<phno<<" "<<email_id;
			}
			fout.close();
		}
		
		
	
		
};

void get_info(){
	ifstream fin;
	string line;
	fin.open("student.txt");
	
while(fin){
	
		getline(fin,line);
		cout<<line<<endl;
	}
	
	fin.close();
}






int main(){
		char ch;
	
	do{
		
		
		stud_info sd = stud_info();
		sd.add();
	
		cout<<"press n or N to exit otherwise hit y"<<endl;
		cin>>ch;
		if(ch=='n'||ch=='N'){
			break;
		}
	}while(ch!='N' || ch!='n');
	
	get_info();
	
}
