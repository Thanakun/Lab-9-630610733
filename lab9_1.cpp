
#include<iostream>
#include<string>

using namespace std;

int main(){
	int i = 0;
	char grade;
	int count[5] = {}; 
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do
	{
		cout << "Student ["<< i+1 <<"]: ";
		cin >> grade; 
		if(grade == 'A')
		{ 
			count[0]++;
		}else if(grade == 'B')
		{ 
			count[1]++;
		}else if(grade == 'C')
		{ 
			count[2]++;
		}else if(grade == 'D')
		{ 
			count[3]++;
		}else if(grade == 'F')
		{ 
			count[4]++;
		}
		else if(grade!='0'){
			cout << "Wrong input. Please input again." << endl; continue;
		}
		i++;
	}while(grade !='0');
	cout << "In total "<< i-1 << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;		
	
	return 0;
}
