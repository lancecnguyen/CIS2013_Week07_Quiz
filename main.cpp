#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream inStream;
	ofstream outStream;
	
	inStream.open("info.dat");
	int biga = 0, bigf = 0, smalla = 0, smallb = 0, total = 0;
	char ch;
	
	while (!inStream.eof()){
		total++;
		inStream.get(ch);
		switch (ch){
			case 'A':
				biga++;
				break;
			case 'F':
				bigf++;
				break;
			case 'a':
				smalla++;
				break;
			case 'b':
				smallb++;
				break;
		}
	}

	cout << total << " total characters in the file." << endl;
	cout << "There are " << biga << " of A's" << endl;
	cout << "There are " << bigf << " of F's" << endl;
	cout << "There are " << smalla << " of a's" << endl;
	cout << "There are " << smallb << " of b's" << endl;
return 0;	
}