#include <iostream> 
#include <string> 

double finalprice = 0; 

class example {
    public: 
};


int main(){ 
    std::string questions[2] = {"1.Existe una variable infinita?","2.Existe este programa en c++?"};
    std::string answers[2] = {"A.si", "B.no"};
    char Canswer[2] = {'a','b'};
    char res; 
    int size = sizeof(questions) / sizeof(questions[0]);
    int asize = sizeof(answers) / sizeof(answers[0]); 
    for (int i = 0; i < size; i++) {
        std::cout << questions[i] <<std::endl; 
        std::string actual = questions[i];
        std::cin >> res; 
        for (int j = 0; j < asize; j++){
            std::cout<<answers[j] <<std::endl; 
        }
            if (actual == "1.Existe una variable infinita?" && tolower(res) == Canswer[0]){
                std::cout<< "correcto" << std::endl; 
            } else if (actual == "1.Existe una variable infinita?" && tolower(res) != Canswer[0]){
                std::cout<< "incorrecto" << std::endl; 
            }
            if (actual == "2.Existe este programa en c++?" && tolower(res) == Canswer[1]){
                std::cout<< "correcto" << std::endl; 
            } else if (actual == "2.Existe este programa en c++?" && tolower(res) != Canswer[1]){
                std::cout<< "incorrecto" << std::endl; 
            }

    }
    return 0;

}
