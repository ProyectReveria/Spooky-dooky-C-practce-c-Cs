#include <iostream> 
#include <cmath>

class Self_Math {
    public:

    static double sum(double a, double b){
    return a + b;
    }
        static double res(double a, double b){
    return a - b;
    }
        static double mul(double a, double b){
    return a * b;
    }
        static double div(double a, double b){
    return a / b;
    }

};

int main(){
    char op; 
    double x;
    double y; 
    double result; 
    std::cout << "Calculadora" << std::endl;
    std::cout <<"inserte +, -, *, /" << std::endl;
    std::cin >> op; 
    std::cout << "inserte los dos valores" << std::endl; 
    std::cin >> x;  
    std::cin>> y;

    switch(op){
        case '+':
            result = Self_Math::sum(x,y);
            break;
        case '-':
            result = Self_Math::res(x,y);
            break;
        case '*':
            result = Self_Math::mul(x,y);
            break;
        case '/':
            result = Self_Math::div(x,y);
            break;
        default:
        std::cout <<"unvalid" << std::endl; 
        break;
    }

    std::cout << "resultado " << result << std::endl; 
    return 0; 

}
