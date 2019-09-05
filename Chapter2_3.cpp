#include <iostream>
void First(void);
void Second(void);
int main(){
First();
First();
Second();
Second();
return 0;
}

void First(void){
std::cout<<"Three blind mice \n";
}

void Second(void){
std::cout<<"See how they run \n";
}
