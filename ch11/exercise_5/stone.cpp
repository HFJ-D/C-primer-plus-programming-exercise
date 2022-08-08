#include <stdlib.h>
#include "stonewt.h"

int main()
{
    using namespace std;
    Stonewt incognito = 275;
	Stonewt wolfe(285.7);
	Stonewt taft(21, 8);

	cout << "incognito: " << incognito;
    cout << "wolfe: " << incognito;
    cout << "taft: " << incognito;
    wolfe.set_state(Stonewt::FLOATPUND);
    cout << "wolfe in Floatpound: " << wolfe;
    
    cout << "incognito + wolfe: " << incognito + wolfe;
    cout << "taft - incognito: " << taft - incognito;
    cout << "incognito * 1.17: " << incognito * 1.17;
    cout << "1.17 * incognito: " << 1.17 * incognito;

	
    system("pause");
    return 0;
}