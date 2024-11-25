    #include <iostream>
    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    #include <ranges>

  
 int main(){

    std::ifstream file("C:/Users/trond/Documents/Workspace GIT/CPP Repositories/CppTraining/AoC/2015/dwnld/day1.txt");//https://adventofcode.com/2015/day/1/input
    if (!file.is_open()) {
        std::cerr << "Error opening the file!";
        return 1;
    }
    std::string s;
    while (std::getline(file, s))
    file.close();
    
    int stories = std::ranges::count(s, '(')-std::ranges::count(s, ')');
    std::cout<< "Dag 1a- etasje: "<< stories<<"\n";
    int a= 0; 
    int e =0;
      
    while( e >-1){
    if(s[a]=='('){e++;}
    if(s[a]==')'){e--;}
    a++;
    }
    std::cout<<"Dag 1b - posisjon : "<< a; 

return 0;
} 