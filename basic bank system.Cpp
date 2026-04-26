#include <iostream>

//variables 
int balance = 0; 
int choice;  
char repetir; 
class bank {
    public: 

}; 

void menu(){
    std::cout << "bienvenido a un programa bancario" <<std::endl; 
    std::cout << "1.si decea agregar dinero " << std::endl; 
    std::cout << "2.si decea retirar dinero " << std::endl; 
    std::cout << "3.si decea saber su balance" << std::endl;
    std::cout << "4.si desea salir" << std::endl;
    std::cin >> choice; 
}

int main(){
    int money; 
    menu(); 
    switch (choice) {
        case 1 :
        std::cout << "cuanto dinero desea ingresar?"<<std::endl; 
        std::cin >> money; 
        balance += money; 
        std::cout << "transaccion realizada volviendo al menu." <<std::endl; 
        return main(); 
        break;
        case 2:
        std::cout << "cuanto dinero desea retirar?"<<std::endl; 
        std::cin >> money; 
        if (money  > balance) {
            std::cout << "no puede retirar el dinero, balance insuficiente" << std::endl; 
        } else {
                    balance -= money;
        }
        std::cout << "transaccion realizada volviendo al menu." <<std::endl; 
        return main(); 
        break;
        case 3:
        std::cout << "su balance es de: " << balance << std::endl; 
        return main();
        break; 
        case 4: 
        std::cout << "pase buen dia!" << std::endl; 
        return 0; 
        break; 
        default:
        std::cout << "Pon una eleccion valida" << std::endl; 
        return main();
        break;
    }
    
}
