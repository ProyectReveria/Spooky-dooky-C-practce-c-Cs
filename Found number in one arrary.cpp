#include <iostream> 
#include <string> 

double finalprice = 0; 

class example {
    public: 
};


int searcharray(int array[], int size, int element) { 

    for(int i = 0; i < size; i++){
        if (array[i] == element){
            return i;
        }
    }
    return -1; 
}

int main(){
    int number[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(number)/sizeof(number[0]);
    int index;
    int mynum; 

    std::cout << "ingrese u numero para buscar del 1 al 10" << std::endl; 
    std::cin >> mynum; 
    index = searcharray(number,size,mynum);
    if (index != -1){
        std::cout << number[index] <<std::endl; 
        return 0;
    } else if (index == 0){
        std::cout << "number not found" << std::endl; 
    }

}
