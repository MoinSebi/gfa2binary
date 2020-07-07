//
// Created by svorbrugg on 31.01.20.
//

#ifndef GFA2BINARY_NODE_H
#define GFA2BINARY_NODE_H

#include <string>
using namespace std;

class node {
    private:
        int id;
        string seq;
    public:
        node(int i, string s);
        int getId();
        string getSeq();
        string getSeq(int i);


};


#endif //GFA2BINARY_NODE_H
