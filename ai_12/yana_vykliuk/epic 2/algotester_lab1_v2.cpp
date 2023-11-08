#include <iostream>

using namespace std;

int OriginalHeight1, OriginalHeight2, OriginalHeight3, OriginalHeight4;
int Cut1, Cut2, Cut3, Cut4; 

int main ()
{
    cin >> OriginalHeight1 >> OriginalHeight2 >> OriginalHeight3 >> OriginalHeight4;
    cin >> Cut1 >> Cut2 >> Cut3 >> Cut4;

    if (Cut1>OriginalHeight1 || Cut2>OriginalHeight2 || Cut3>OriginalHeight3 || Cut4>OriginalHeight4)
    {
        cout << "ERROR" << endl;
    }
    else
    {
        int FinalHeight1 = OriginalHeight1 - Cut1;
        int FinalHeight2 = OriginalHeight2 - Cut2;
        int FinalHeight3 = OriginalHeight3 - Cut3;
        int FinalHeight4 = OriginalHeight4 - Cut4;

        if ((2*FinalHeight1>OriginalHeight2 || 2*FinalHeight1>OriginalHeight3 || 2*FinalHeight1>OriginalHeight4) && (2*FinalHeight2>OriginalHeight3 || 2*FinalHeight2>OriginalHeight4) && 2*FinalHeight3>OriginalHeight4)
        {
            cout << "YES" << endl;   
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
