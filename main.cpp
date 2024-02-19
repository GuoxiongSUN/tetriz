#include <iostream>
#include"terminal.h"
#include<thread>
#include<chrono>


using namespace std::chrono_literals;
// using namespace std;

// void a();

int main(){

    // cout<<"hello world"<<endl;
    // a();


    // std::cout<<"\033[5;10H"<<"\033[38;5;214m"<<"hello world"<<"\033[10;1H";

    // tc::move_to(5,10);
    // tc::set_fore_color(214);
    // std::cout<<"hello world";
    // tc::move_to(13,1);

    tc::hide_cursor();
    
    int i=1;
    while(true){
        tc::clearn_screen();
        
        tc::move_to(i++,10);
        tc::set_back_color(15);

        std::cout<<"  ";
        tc::reset_color();

        std::cout<<std::flush;

       
        std::this_thread::sleep_for(500ms);

    }

    return 0;
}