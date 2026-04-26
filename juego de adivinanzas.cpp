#include <iostream>
#include <cmath>



class Class {
public: 

};

int main(){
    srand(time(0)); 
    int num = rand() % 20; 
    int Gnum; 
    char r; 
    std::cout << "Adivina el numero! (0/20)" << std::endl; 
    std::cin >>Gnum; 

    if (num == Gnum){
        std::cout << "ganaste" << std::endl; 
        std::cout << "De nuevo? (Y/N)" << std::endl; 
        std::cin >> r; 
        switch (tolower(r)){ 
            case 'y': 
            return main(); 
            break; 
            case 'n':
            std::cout << "Gracias por jugar!" << std::endl; 
            return 0; 
            break;
        }
    }else {
                std::cout << "perdiste, el numero era: " << num << std::endl; 
        std::cout << "De nuevo? (Y/N)" << std::endl; 
        std::cin >> r; 
        switch (tolower(r)){ 
            case 'y': 
            return main(); 
            break; 
            case 'n':
            std::cout << "Gracias por jugar!" << std::endl; 
            return 0; 
            break;
    }
}
    
}
