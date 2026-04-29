#include <iostream> 
int main(){
     int cell[3][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int filas = sizeof(cell) / sizeof(cell[0]); 
    int columnas = sizeof(cell[0]) / sizeof(cell[0][0]); 
    char respuesta; 
    std::cout << "_________________" << std::endl;
     for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){

        std::cout << "| " << cell [i][j] << " | "; 
        }
        std::cout << std::endl; 
     }
    std::cout << "-----------------" << std::endl;
    std::cout << "Quieres reducir todas las celda en 1?? {Y/N}" << std::endl; 
    std::cin >> respuesta; 
    if (tolower(respuesta) =='n'){
        std::cout << "Quieres sumar todas las celda en 1?? {Y/N}" << std::endl; 
        std::cin >> respuesta; 
        if (tolower(respuesta) == 'n'){
            std::cout << "end program" << std::endl;
            return 0; 
        }  else if (tolower(respuesta) == 'y'){
                for (int i = 0; i < filas; i++){
                    for (int j = 0; j < columnas; j++){
                    cell[i][j] +=1; 
                    std::cout << "| " << cell [i][j] << " | "; 
                    }
                 std::cout << std::endl; 
                std::cout << "end program" << std::endl;
                    return 0; 
        } 
     }

    }else if(tolower(respuesta) == 'y'){
        for (int i = 0; i < filas; i++){
            for (int j = 0; j < columnas; j++){
            cell[i][j] -=1; 
            std::cout << "| " << cell [i][j] << " | "; 
            }
        std::cout << std::endl; 
        std::cout << "end program" << std::endl;
     }
    }

     return 0; 
}

