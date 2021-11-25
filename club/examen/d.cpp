#include <iostream>
#include <stdlib.h>


//usar un long long

using namespace std;

int main()
{

    int q, s;
    int nt = 0;
    cin >> q >> s;

    int c[q];

    for (int i = 0; i < q; i++)
    {
        char aux;
        cin >> aux >> c[i];
        if (aux == '-')
        {
            c[i] = -c[i];
        }

        if(c[i] < 0 && -c[i] > s){
            nt ++;
        }else{
            s = s + c[i];
        }
        
    }

    cout << s << " " << nt << endl;

    return 0;
}