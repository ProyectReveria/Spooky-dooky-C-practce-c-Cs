#include <iostream> 
#include <string> 

double finalprice = 0; 

class example {
    public: 
};

void Gtotal(double prices[],  int size){
    int i = 0; 
    for ( i ; i < size; i++){
        finalprice += prices[i];

    }
}

std::string student[] = {"julio", "rebeca" , "Sandi"};
int main(){
    double prices[] = {49.99, 62.00};
    int size = sizeof(prices)/ sizeof(prices[0]);
    Gtotal(prices, size);
    std::cout << finalprice << std::endl; 
    return 0;
}

