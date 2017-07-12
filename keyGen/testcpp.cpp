#include "keyGen.h"
/*65-90*/
/*whole ascii range is : 33 - 126*/

int main()
{
	keyGen g;
	while (true)
	{
		cout << "options: " << endl;
		cout << "1. only small letters" << endl;
		cout << "2. only big letters" << endl;
		cout << "3. small and big letters" << endl;
		cout << "4. only number" << endl;
		cout << "5. all signs letters and numbers" << endl;
		int size;
		int level;
		cout << "input desired length of password: ";
		cin >> size;
		cout << endl << "input security level (1-5): ";
		cin >> level;
		cout << endl;
		g.newKey( size, level );
		
		cout << "password is: ";
		cout << g.getKey() << endl;
	}
	return 0;
}