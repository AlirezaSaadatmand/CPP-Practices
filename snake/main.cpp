#include <iostream>
#include <conio.h>
#include <windows.h>

bool gameOver = false;
const int width = 40;
const int hieght = 20;


void setUp(){

}
void draw(){
    system("CLS");
    for(int i = 0; i<width; i++){
        std::cout << "#";
    }std::cout << std::endl;

    for (int i = 0; i < hieght ; i++){
        for (int j = 0; j < width ; j++){
            if (j == 0 || j == width -1){
                std::cout << "#";
            }else{
                std::cout << " ";
            }
        }
            std::cout << std::endl;
    }

    for(int i = 0; i<width; i++){
        std::cout << "#";
    }

}
void input(){

}
void logic(){

}

int main(){

    setUp();
    while (!gameOver){
        draw();
        input();
        logic();
        Sleep(200);
    }
    return 0;
}