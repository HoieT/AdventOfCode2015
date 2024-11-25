#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <bits/stdc++.h>



int main() {
    std::string filename = "C:/Users/trond/Documents/Workspace GIT/CPP Repositories/AdventOfCode2015/files/day2.txt"; // Change this to the name of your file
    std::ifstream infile(filename);
    std::vector<std::vector<int>> v;
    if (!infile) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }
    int sqrft=0; 
    int rbnft=0;
    std::string line;
    while (std::getline(infile, line)) {
        std::istringstream iss(line);
        int a, b, c;
        char x1, x2;
         // Parse the line in the format "int x int x int"
        if (iss >> a >> x1 >> b >> x2 >> c && x1 == 'x' && x2 == 'x') {
            std::vector<int> t = {a,b,c};
            std::stable_sort(t.begin(), t.end());
            sqrft=sqrft+((2*(t[0]*t[1]))+(2*(t[1]*t[2]))+(2*(t[0]*t[2]))+(t[0]*t[1]));
            rbnft=rbnft+(2*t[0]+2*t[1]+t[0]*t[1]*t[2]);
        } else {
            std::cerr << "Error: Malformed line -> " << line << std::endl;
        } 
    }
    std::cout<<"Antall SqrFeet Paper: "<<sqrft<<std::endl;
    std::cout<<"Antall Feet Ribbon: "<<rbnft<<std::endl;
    infile.close();
    return 0;
}