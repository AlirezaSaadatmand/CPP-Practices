#include <iostream>
#include <ctime>

std::string computer();
std::string compare(std::string computerCH , std::string myCH);

int main(){
    int myscore = 0;
    int comscore = 0;
    int how;
    std::string myCH;
    std::string computerCH;
    std::string resualt;
    std::cout << "wellcom to rock paper sissors" << std::endl;
    std::cout << "how many times do you want to play : ";
    std::cin >> how;
    for (int i = 1 ; i <= how ; i++){
        std::cout << "Enter your choice : ";
        std::cin >> myCH;
        computerCH = computer();
        resualt = compare(computerCH , myCH);
        if(resualt == "my"){
            myscore = myscore + 1;
            std::cout << "your choice : " << myCH << std::endl << "computer choice : " << computerCH << std::endl << "your score : " << myscore << std::endl << "computer score : " << comscore << std::endl;
            std::cout << "-----------------------------------------------------------" << std::endl;
        }
        if(resualt == "comp"){
            comscore = comscore + 1;
            std::cout << "your choice : " << myCH << std::endl << "computer choice : " << computerCH << std::endl << "your score : " << myscore << std::endl << "computer score : " << comscore << std::endl;
            std::cout << "-----------------------------------------------------------" << std::endl;
        }
        if(resualt == "tie"){
            std::cout << "your choice : " << myCH << std::endl << "computer choice : " << computerCH << std::endl << "your score : " << myscore << std::endl << "computer score : " << comscore << std::endl;
            std::cout << "-----------------------------------------------------------" << std::endl;
        }
    }
    if(myscore > comscore){
        std::cout << "Yeah! you win" << std::endl;
        std::cout << "your score : " << myscore << std::endl << "computer score : " << comscore << std::endl;    
    }
    if(myscore < comscore){
        std::cout << "NO! you lose" << std::endl;
        std::cout << "your score : " << myscore << std::endl << "computer score : " << comscore << std::endl;   
    }
    if(myscore == comscore){
        std::cout << "it's a tie" << std::endl;
        std::cout << "your score : " << myscore << std::endl << "computer score : " << comscore << std::endl;
    }
    return 0;
}
std::string computer(){
    int num;
    std::string choise;
    srand(time(NULL));
    num = (rand() % 3) + 1;
    if(num == 1){
        return  "rock";
    }
    if(num == 2){
        return "paper";
    }
    if(num == 3){
        return "sissors";
    }
}
std::string compare(std::string computerCH , std::string myCH){
    if(computerCH == "rock" && myCH == "paper"){
        return "my";
    }
    if(computerCH == "rock" && myCH == "sissors"){
        return "comp";
    }
    if(computerCH == "paper" && myCH == "sissors"){
        return "my";
    }
    if(computerCH == "paper" && myCH == "rock"){
        return "comp";
    }
    if(computerCH == "sissors" && myCH == "rock"){
        return "my";
    }
    if(computerCH == "sissors" && myCH == "paper"){
        return "comp";
    }
    if(computerCH == myCH){
        return "tie";
    }
}
