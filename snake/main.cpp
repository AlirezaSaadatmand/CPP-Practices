#include <iostream>
#include <conio.h>
#include <windows.h>
#include <vector>

using namespace std;

bool gameOver = false;
const int width = 40;
const int hieght = 20;

class Snake{
    public:

    vector <vector <int>> parts = {{width / 2 , hieght / 2}};
    bool up = false;
    bool right = false;
    bool bottom = false;
    bool left = false;

    void move(){
        this->parts.erase(this->parts.begin());

        vector <int> head = this->parts[this->parts.size() - 1]; 

        if (this->up){
            this->parts.push_back({head[0] , head[1] -1});
        }else if (this->right){
            this->parts.push_back({head[0] +1, head[1]});
        }else if (this->bottom){
            this->parts.push_back({head[0] , head[1] +1});
        }else{
            this->parts.push_back({head[0] -1, head[1]});
        }
    }    
};

Snake snake;
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
                for (int k = 0; k < snake.parts.size() ;k++){
                    if (snake.parts[k][0] == j && snake.parts[k][1] == i){
                        std::cout << "O";
                    }else{
                        std::cout << " ";
                    }
                }
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