//
// Created by svorbrugg on 31.01.20.
//

#include "graph.h"

#include <fstream>
#include <sstream>
#include <algorithm>
#include <iterator>
using namespace std;

graph::graph(string s) {

    std::vector<node> n;
    string delim = "\t";
    cout << "test" << endl;
    ifstream myfile;
    if (myfile.is_open()){
        u = 1;
    }
    myfile.open(s);
    int node_id = 0;
    while(!myfile.eof()) {
        string line;
        getline(myfile, line);
        if (line.rfind("S", 0) == 0){
            line.erase(0, line.find(delim) + delim.length());
            int pos;
            string s2 = line.substr(0,line.find(delim));
            istringstream(s2) >> pos;
            line.erase(0, line.find(delim) + delim.length());
            string s3 = line.substr(0,line.find(delim));
            node a (pos, s3);
            n.push_back(a);
        }

        if (line.rfind("P", 0) == 0){
            string s = line;
            vector <string> h = split(s, ',');
            cout << typeid(line).name() << endl;
            cout << line << endl;

        }



    }

    nodes = n;
    myfile.close();
    u = 1;


}

vector<int> graph::getIds() {
    vector<int> uni;
    for (int i = 0; i < nodes.size(); i++){
        uni.push_back(nodes[i].getId());
    }
    cout << uni.size() << endl;
    sort(uni.begin(), uni.end() );
    uni.erase( unique( uni.begin(), uni.end() ), uni.end() );
    cout << uni.size() << endl;
    cout << uni.size() << endl;
    cout << uni.size() << endl;
    return uni;

}

vector<node> graph::getNodes(){
    return nodes;
}


vector <string> split(const string& s, char delimiter)
{
    vector<std::string> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }
    for (int x = 0; x < token.size(); x++){
        cout << token[x] << endl;
    }
    return tokens;
}