#include <iostream>

void LYtoAU(float);

int main(){
float ly;
std::cout<<"Please, enter the number of light years: ";
std::cin>>ly;
return 0;
}

void LYtoAU(float ly){
double au;
au=ly*63240;
std::cout<< ly<<" light years = "<<au<<" astronomical units\n";
}
