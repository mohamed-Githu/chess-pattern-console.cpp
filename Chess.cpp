#include <iostream>
using namespace std ;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int rows ;
	
	cout << "Rows = " ;
	cin >> rows ;
	
	for ( int x = 1 ; x <= rows ; x ++ )
	{
		for ( int y = 1 ; y <= 3 ; y ++ )
		{
			for ( int z = 1 ; z <= rows ; z ++ )
			{
				if ( ( x + z ) % 2 == 0 )
				cout << "******" ;
				else 
				cout << "      " ;
			}
			cout << endl ;
		}
	}
	
	
	return 0;
}
