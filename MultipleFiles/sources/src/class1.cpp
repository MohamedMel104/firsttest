#include <iostream>
#include <string>
#include "class1.h";

Class1::Class1(){
    phrase = "Random Phrase";
}
    std::string Class1::getPhrase() const{
        return phrase;
    }
    void Class1::setPhrase(std::string newPhrase){
        phrase = newPhrase;
    }