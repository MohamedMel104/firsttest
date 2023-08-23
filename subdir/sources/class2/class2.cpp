#include <iostream>
#include <string>
#include "class2.h";
Class2::Class2() : myClass(){

}
void Class2::print(){
    std::cout<<"The phrase stored is: "<<myClass.getPhrase();
    
}