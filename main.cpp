#include <iostream>

using namespace std;

class Rentagle{
		
	public:	
	float obwod(float bokA,float bokB)
	{
		float result=0;
	result=(bokA*2)+(bokB*2);
	return result;
	};
	float pole(float bokA,float bokB)
	{
		float result=0;
	result=bokA*bokB;
	return result;
	};			
};
int main(int argc, char** argv) {
	float bokA,bokB;
	setlocale(LC_CTYPE,"polish");
	cout << "Podaj Pierwszy Bok ";
	cin >> bokA;
	cout << "Podaj Drugi Bok ";
	cin >>bokB;
	Rentagle Oblicz;
	cout << "Obwód to: "<<Oblicz.obwod(bokA,bokB)<<endl;
	cout << "Pole to: "<<Oblicz.pole(bokA,bokB);
	return 0;
}
main();

