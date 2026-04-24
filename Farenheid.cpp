#include <iostream> 
#include <cmath>
#include <cctype>

class Self_Math {
    public:

    static double Fh(double temp){ return (1.8 * temp) + 32.0;}
    static double cls(double temp){ return (temp - 32) / 1.8;}

};

int main(){
    double temp;
    char unit; 

    std::cout << "Temperature Conversion" << std::endl; 
    std::cout << "F = Fahrenheit |" << std::endl; 
    std::cout << "C = Celsious" << std::endl;    
    std:: cin >> unit; 
    unit = std::tolower(unit);



    switch(unit){
        case 'f' : 
        std::cout << "Enter the celcious emperature"; 
        std::cin >> temp; 
        if (temp  <= 0){
            std::cout << "solo numeros majores a 0";
            std::cin >> temp; 
        }
        std::cout << "temperatura: " << Self_Math::Fh(temp) << std::endl;
        break;

        case 'c' :
        std::cout<< "ender the fahrenheit emperature";
        std::cin>> temp; 
                if (temp  <= 0){
            std::cout << "solo numeros majores a 0";
            std::cin >> temp; 
        }
        std::cout << "temperatura: " << Self_Math::cls(temp) << std::endl;
        
        break;
        default:
        std::cout<< "do what the program tell yo to do you know" << std::endl;
    }
    return 0;

}

