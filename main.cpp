

#include <iostream>
#include <string>

#include "lib.cpp"

 
int main(int argc, char*argv[]) {
    std::string fullName = argc > 1 ? argv[1] : "?Stephen Chung???What the???";
    auto lt = libTest::libTest(fullName);

    auto msgs = libTest::Message(); 
    std::string msg = "Hello ";
    std::cout << msg << lt.name() << " " << msgs.One()<< std::endl;

    return 0;
}
