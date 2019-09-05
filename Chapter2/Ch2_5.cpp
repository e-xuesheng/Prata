#include <iostream>

void CtoF(int);

int main(){
int cels;
std::cout<<"Please, enter a temperature in Celsius degrees: ";
std::cin>>cels;
CtoF(cels);
return 0;
}

void CtoF(int cels){
float fahr1;
fahr1=1.8*cels+32;
std::cout<<cels<<"degrees Celsius is "<<fahr1<<" degrees Fahrenheit";
}
