#include <iostream>
#include <cmath>
#include <clocale>


using namespace std;

int main() {

    setlocale (LC_ALL, "Russian");
    float xa, ya, xb, yb, xc, yc, ab, bc, ac;

    cout<< " Dankov Artem,IS-01,10V "<<endl<<"Put x-coordinate for the 1 apex: ";
    cin>>xa;
    cout<< "Put y-coordinate for the 1 apex: ";
    cin>>ya;
    cout<<"Put x-coordinate for the 2 apex: ";
    cin>>xb;
    cout<<"Put y-coordinate for the 2 apex: ";
    cin>>yb;
    cout<<"Put x-coordinate for the 3 apex: ";
    cin>>xc;
    cout<<"Put y-coordinate for the 3 apex: ";
    cin>>yc;
    ab=(xb-xa)*(xb-xa)+(yb-ya)*(yb-ya);
    ac=(xc-xa)*(xc-xa)+(yc-ya)*(yc-ya);
    bc=(xc-xb)*(xc-xb)+(yc-yb)*(yc-yb);
    if(ab+bc == ac || ac+ab == bc || bc+ac == ab )
    {
     cout<<"Прямокутний ";
    }
    ab=sqrt(ab);
    ac=sqrt(ac);
    bc=sqrt(bc);
    if(ab==ac==bc)
    {
    cout<<"Рiвностороннiй";
    }
    else if(ac==ab || ab==bc || bc==ac )
    {
    cout<<"Рiвнобедрений";
    }
    else
    {
    cout<<"Рiзностороннiй";
    }
    return 0;



}
