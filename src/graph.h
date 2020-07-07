//
// Created by svorbrugg on 31.01.20.
//

#ifndef GFA2BINARY_GRAPH_H
#define GFA2BINARY_GRAPH_H

#include <array>
#include "node.h"
#include <vector>
#include <iostream>
#include <set>
#include <sstream>
#include "path.h"
using namespace std;

class graph {
private:
    int u;
    vector<node> nodes;
    vector<path> paths;

    set<int> uni;

public:
    graph(string s);
    vector<node> getNodes();
    vector<int> getIds();
    vector<string> split(string& s, char del);


};




#endif //GFA2BINARY_GRAPH_H
