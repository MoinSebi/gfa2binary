#include <iostream>
#include "node.h"
#include "graph.h"

using namespace std;


int main() {
    cout << "Hello, World!" << endl;
    node frank (1, "test");
    graph g ("/ebio/abt6_projects8/graph_GWAS/data/test_test.chr4.2.10000.gfa");
    int a = g.getNodes().size();
    cout << "the size is " << a << endl;
    cout << frank.getId() << endl;
    vector<int> b = g.getIds();
    return 0;
}