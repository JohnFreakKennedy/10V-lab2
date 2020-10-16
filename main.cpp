#include <iostream>
#include <math.h>
#include <locale.h>



using namespace std;

int main() {

    setlocale (LC_ALL, "Russian");
    float xa, ya, xb, yb, xc, yc, ab, bc, ac;

    cout<< " Dankov Artem,IS-01,10V "<<endl<<"Put x-coordinate for the 1 top: ";
    cin>>xa;
    cout<< "Put y-coordinate for the 1 top: ";
    cin>>ya;
    cout<<"Put x-coordinate for the 2 top: ";
    cin>>xb;
    cout<<"Put y-coordinate for the 2 top: ";
    cin>>yb;
    cout<<"Put x-coordinate for the 3 top: ";
    cin>>xc;
    cout<<"Put y-coordinate for the 3 top: ";
    cin>>yc;
    ab=(xb-xa)*(xb-xa)+(yb-ya)*(yb-ya);
    ac=(xc-xa)*(xc-xa)+(yc-ya)*(yc-ya);
    bc=(xc-xb)*(xc-xb)+(yc-yb)*(yc-yb);
    if(ab==ac || ac==bc || bc==ab )
    {
     cout<<"Ïðÿìîêóòíèé ";
    }
    ab=sqrt(ab);
    ac=sqrt(ac);
    bc=sqrt(bc);
    if(ab==ac==bc)
    {
    cout<<"Ðiâíîñòîðîííié";
    }
    else if(ac==ab || ab==bc || bc==ac )
    {
    cout<<"Ðiâíîáåäðåíèé";
    }
    else
    {
    cout<<"Ðiçíîñòîðîííié";
    }
    return 0;
    //cout<<endl<<ab<<" "<<bc<<" "<<ac<<endl;


}
