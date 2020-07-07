//
// Created by svorbrugg on 31.01.20.
//

#include "node.h"
#include <string>


node::node(int i, string s): id(i), seq(s) {};

int node::getId(){
    return id;
}

string node::getSeq() {
    return seq;
}

string node::getSeq(int i) {
    return seq;
}
