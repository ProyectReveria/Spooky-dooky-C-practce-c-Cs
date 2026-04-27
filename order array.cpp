#include <iostream> 
#include <string> 

double finalprice = 0; 

class example {
    public: 
};

 void sort(int array[], int size){
    int temp; 
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - 1; j++){
            if (array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j +1] = temp; 

            }
        }
    }
 }

int main(){
    int arrat[] = {10,5,21,4,214,124,23,512,23,5,2};
    int size = sizeof(arrat) / sizeof (arrat[0]);
    sort(arrat, size);
    for (int i : arrat){
        std::cout <<  i << std::endl; 
    }
}
