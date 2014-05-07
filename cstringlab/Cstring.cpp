#include <iostream>
#include <cstring>
using namespace std;


int strlen(char* s);


int main(){
		char room[25]="Watson 001";
			cout << room << endl; 
			cout << "has" << strlen(room) << "chars\n";
			cout <<" rooms+3=" << room+3<< endl;
			char* room1 = room+1;
			cout << "room1= " << room1<< endl;
			room1[2]='X';
			cout << room << endl;
			
			
			return 0;

}



int strlen(char* s){
	int count=0;
	while(s[count]!='\0')
			count++;
	return count;

	}
/*

ifstrlen(char * s)

{

int count=0;
while( s[count]!='/o')
	count++;
	return count;
}*/