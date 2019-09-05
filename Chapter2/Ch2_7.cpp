#include <iostream>

void Time(int,int);

int main(){
int min, hour;
std::cout<<"Enter the number of hours: ";
std::cin>>hour;
std::cout<<"Enter the number of minutes: ";
std::cin>>min;
Time(min,hour);
return 0;
}

void Time(int min, int hour){
std::cout<<"Time: "<<hour<<":"<<min;
}
