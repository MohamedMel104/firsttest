#pragma once
class Class1{
    public:
    Class1();
    std::string getPhrase() const;
    void setPhrase(std::string newPhrase);
    private:
    std::string phrase;
};