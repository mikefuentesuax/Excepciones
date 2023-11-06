#include <iostream>

bool erroflag = false;

void simulateError(){

    erroflag = true;
}
void handleError(){
    if (erroflag){
        std::cout << "Error" << std::endl;
        erroflag = false;
    }
    else{
        std::cout << "No error" << std::endl;
    }
}
int main(){
    simulateError();


    handleError();

    handleError();
    return 0;
}