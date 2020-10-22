#include <iostream>

using namespace std;

void Ch2_Programming_Project_16(){
	char ans = ' ';

	ans = inputChar("(M)ale or (F)emale? ", 'm', 'f');

	if (ans == 'm'){
		ans = inputChar("(H)ero or (V)illain? ", 'h', 'v');
		if (ans == 'v'){
			cout << "You should get a mohawk";
		}
		else{
			ans = inputChar("S(t)eak or S(u)shi? ", 't', 'u');
			if(ans == 't'){
				cout << "You should get a flat top";
			}
			else cout << "You should get a pompadour";
		}
	}
	else{
		ans = inputChar("(H)ero or (V)illain? ", 'h', 'v');
		if (ans == 'v'){
			cout << "You should get a mohawk";
		}
		else{
			ans = inputChar("(A)nime or (C)artoon? ", 'a', 'c');
			if(ans == 'a'){
				cout << "You should go with bangs";
			}
			else cout << "You should get a bob";
		}
	}
}
