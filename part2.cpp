// part2
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <limits.h>
#include <algorithm>
#include <utility>
#include <fstream>
#include <sstream>

using namespace std;

class Graph;
class Edege;
class Vertex;

class Edge {
    int weight;
    Vertex* v1;
    Vertex* v2;
public:
    int getWeight() const {return weight;}
    Vertex* getV1() const {return v1;}
    Vertex* getV2() const {return v2;}
    void setWeight(int w) {weight = w;}
    void setV1(Vertex* v) {v1 = v;}
    void setV2(Vertex* v) {v2 = v;}
    Edge(int w = INT_MAX, Vertex* V1, Vertex* V2) {weight = w; v1 = V1; v2 = V2;}

};

class Vertex {
    bool visited;
    vector<Edge *> 
};

class Graph {
    vector<vector<Vertex>> adjList;
public:


};

int main() {
    ifstream infile;
    infile.open("2a.in");
    string line;
    infile >> line;
    cout << line << endl;
}

