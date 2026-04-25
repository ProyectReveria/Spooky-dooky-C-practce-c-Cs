#include <iostream> 
#include <cmath>
#include <cctype>
#include <ctime> 

class Self_Math {
    public:

};

int main(){
    srand(time(0));
    int RanEvent = rand() % 4; 
    
    switch(RanEvent){
        case 1:
        std::cout << "You win your mom" <<std::endl; 
        break;
        case 2:
        std::cout << "You win your dad" <<std::endl; 
        break;
        case 3:
        std::cout << "You win your the sword of someting" <<std::endl; 
        break;
        case 4:
        std::cout << "You win your xd" <<std::endl; 
        break;
    }
    return 0;

}

