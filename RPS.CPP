#include <iostream> 

int IA_Select; 
int Player_Select; 
char IA_Comparative; 
char PlayerChoice; 
std::string winner;


class IA_Random {
    public: 
    static void IA_Selectrion(int Ia_Select ){
    srand(time(0)); 
    Ia_Select = rand() % 3; 
    switch(Ia_Select){
        case 0:
        IA_Comparative = tolower('p');
        break;
        case 1:
        IA_Comparative = tolower('e'); // papel
        break;
        case 2:
        IA_Comparative = tolower('t');
        break;
    }
    }
}; 

class UI {
    public: 

    static std::string Winer (){
        std::string winnerelect; 
        if (IA_Comparative == PlayerChoice){
            winnerelect = "empate"; 
        }
        switch (IA_Comparative){
            case 'p':
            switch (PlayerChoice) {
                case 'e':
                winnerelect = "Player lost";
                break; 
                case 't' : 
                winnerelect = "player win";
                break;

            }break;

            case 'e':
            switch (PlayerChoice) {
                case 't':
                winnerelect = "Player lost";
                break; 
                case 'p' : 
                winnerelect = "player win";
                break;
            }break;

            case 't' :
                        switch (PlayerChoice) {
                case 'p':
                winnerelect = "Player lost";
                break; 
                case 'e' : 
                winnerelect = "player win";
                break;

            }break;


        }

        return  winner = winnerelect;
    }

    static void Play_UI(){
        std::cout << "piedra ,papel o tigera?" << std::endl; 
        std::cout << "0 = piedra, 1 = papel, 2 = tigeras" <<std:: endl;
        std:: cin >> Player_Select; 
        switch(Player_Select){
        case 0:
        PlayerChoice = tolower('p');
        break;
        case 1:
        PlayerChoice = tolower('e'); // papel
        break;
        case 2:
        PlayerChoice = tolower('t');
        break;
    }
        IA_Random::IA_Selectrion(IA_Select);
        UI::Winer();
        std::cout << "La seleccion es!" << IA_Comparative << "|" << PlayerChoice <<std::endl;
        std::cout << "IA | Player" <<  std::endl; 
        if (IA_Comparative == PlayerChoice) {
            std::cout << "empate" << std::endl; 
        } else {
            Winer();
            std::cout << "el ganador es" << winner << std::endl;  
        }
    }
};

int main(){
    UI::Play_UI(); 
}
