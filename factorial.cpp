#include <iostream>
using namespace std;


unsigned long long factorial(unsigned long long n){
  unsigned long long n2=1;
  while(n>0){
    n2=n*n2;
    n=n-1;
  }
return n2;
}

int main(){
  int a;
  char denuez;
  do{
    cout<<"Dame un número positivo para darte el factorial de ese número, "<<endl;
    cout<<"solo para eso sirvo"<<endl;
    cin>>a;
    while (a<0){
        cout<<"Oye, te dije positivo, baboso, a ver, intentalo de nuevo"<<endl;
        cin>>a;
    }

    cout<<factorial(a)<<endl;
    cout<<"¿Quieres hacerlo de nuevo? en caso de ser asi oprime 'y' y si no es el caso"<<endl;
    cout<<"oprime 'n'"<<endl;
    cin>>denuez;
    if(denuez!='y' and denuez!='Y' and denuez!='n' and denuez!='N'){
      cout<<"seguir instrucciónes no es tan dificil, intentalo de nuevo"<<endl;
      cin>>denuez;}
  }while(denuez=='y' || denuez=='Y');

  return 0;
}
