#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>
using namespace std;
const int
   N=0,
   L=30;  //maksimalna dyljina na marka};
struct car
	{char marka[L];
	 int gp;
	 double cena;
	} ;
   typedef car Tmasiv[N+1];
   Tmasiv masiv; int br;
void incar(car &a)
   {cout<<"Въведете марка:";
    cin.getline(a.marka,L); //strtok(a.marka,"\n");
    cout<<"Година на производство:";
    cin>>a.gp;
    cout<<"Цена:";
    cin>>a.cena;
    cin.ignore();
   } //incar


int main()
{
    setlocale(LC_ALL, "bulgarian");
    cout<<"Въведете брой на колите:";
    cin>>br; cin.ignore();
    for(int i=0; i<N; i++) incar(masiv[i]);
    for(int i=0; i<N; i++) cout<<masiv[i].marka<<' '<<masiv[i].gp<<' '<<masiv[i].cena<<endl;
    cout<<fixed<<setprecision(5)<<5.0<<endl;
}
