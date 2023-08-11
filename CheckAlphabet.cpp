#include <iostream>
using namespace std;
int main (){
char ch;
	cout <<"Enter a character : ";
	cin>>ch;
		if ((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z')){
			cout<<"It is an alphabet.\n";}
		else {
			cout<<"It is not an alphabet.\n";}
return 0;
}
