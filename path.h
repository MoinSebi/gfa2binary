//
// Created by svorbrugg on 31.01.20.
//

#ifndef GFA2BINARY_PATH_H
#define GFA2BINARY_PATH_H

#include <string>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

class path {
public:
    string name;
    vector<int> ids;

private:
    path(string s, string st);
    path(string s);
};


#endif //GFA2BINARY_PATH_H
