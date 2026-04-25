#include <iostream> 
#include <cmath>
#include <cctype>
#include <ctime> 

int counter = 0; 
int exitroles =0;
int i; 
const int intentos = 1000000000;

class Self_Math {
    public:

};

int main(){

    srand(time(NULL)); 

    

    for ( i; i < intentos; i++){
        exitroles = i; 
        int num1 = (rand() % 20) + 1;
        if ( num1 % 3 == 0){
            counter++;
            if (counter == 3){
                continue;
            }
        }
        if (counter == 3){
        continue;
        }
    }
            std ::cout << counter << " de tiradas antes de 3 seguidos" << std::endl;

    return 0;

}

