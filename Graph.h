
#ifndef _GRAPH_H
#define _GRAPH_H

#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include "Product.h"
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
    Edge(Vertex* V1, Vertex* V2, int w = INT_MAX) {weight = w; v1 = V1; v2 = V2;}

};

class Vertex {
    bool visited;
    Product p;
public:
    Vertex(Product p1, bool visit) {p = p1; visited = false;}


};

class Graph {
    vector<vector<Vertex>> adjList;
public:
    Graph(vector<vector<Vertex>> newGraph) {
        adjList = newGraph;
    }
};
#endif 