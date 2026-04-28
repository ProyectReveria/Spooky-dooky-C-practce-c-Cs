#include <iostream> 
#include <string> 
#include <list>

double finalprice = 0; 

std::string Card_name[4] = {"30569309025904", "6011111111111117", "3530111333300000", "5105105105105100" };
int size = sizeof(Card_name)/sizeof(Card_name[0]);

class example {
    public: 
};

int getDigit(const int number); 
int Sumdividiar(const std::string cardnumber); 
void UI(const std::string cardnumber, int creditcardNumberonList);




int main(){ 

    for (int i = 0; i < size; i++){
        std::string cardnumber = Card_name[i]; 
        UI(cardnumber, i); 
    }
    return 0; 
}

int getDigit(const int number){
    return number % 2 + (number / 10 % 10); 
}
int Sumdividiar(const std::string cardnumber){
    int sum = 0 ; 
    int sum2 = 0;

    for (int i = cardnumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardnumber[i] - '0') * 2);
    }
        for (int i = cardnumber.size() - 1; i >= 0; i-=2){
        sum2 += cardnumber[i] - '0';
    }


    return sum + sum2; 
}

void UI(const std::string cardnumber, int creditcardNumberonList){
    int result = 0;

    result = Sumdividiar(cardnumber); 
    if (result % 10 == 0) {
        std::cout << "card numer " << creditcardNumberonList <<" is valid" << std::endl; 
    } else {
        std::cout << "card numer " << creditcardNumberonList <<" is invalid" << std::endl; 
    }
}
