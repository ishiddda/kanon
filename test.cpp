#include<iostream>
#include<fstream>
#include<string>
#include<vector>

int fread(){
    std::ifstream file("SEEN100.TXT, std::ios::binary");
    if(!file){
        std:: cerr << "can not open." << std::endl;
        return 1;
    }

    std::vector<char> buffer(std::istreambuf_iterator<char>(file), {});
    for(char c : buffer){
        std::cout << c;
    }
    return 0;
    
    }

int main(void){ 
    fread();
    //std::cout << "92 A9 82 B2 94 D1" << std::endl;

    return 0;
}