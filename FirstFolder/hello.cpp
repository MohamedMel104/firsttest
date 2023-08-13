#include <iostream>
#include <string>


using namespace std;
int main(){
    std::cout<<"hello world!"<<std::endl;
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    cout<<"The string you've entered is: "<<str<<endl;
    if(str.length()>0){
        cout<<"this string is not empty!"<<endl;
        

    }
    return 0;
}