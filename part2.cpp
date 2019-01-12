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
#include <stdlib.h>
#include "Product.h"
#include "Product.cpp"
#include "Graph.h"
#include <bits/stdc++.h>
using namespace std;

typedef struct Position{
    Product* p;
    bool visited;
}Position;

void insert(Position warehouse[100][100], int x, int y, int pd_num, double weight){
    warehouse[x][y].p = new Product(x, y, pd_num, weight);
    warehouse[x][y].visited = false;
}

bool checkBoundary(int row, int col, bool visited[100][100]) {
    return ((row >=0) && (row < 100) && (col >= 0) && (col <= 100) && (visited[row][col] == false));
}

void BFS(Position warehouse[100][100], int row, int col, bool visited[100][100], int& carry) {
    if (!checkBoundary(row, col, visited)) return;
    int row_dir[] = {1, 1, 1, 0, 0, -1, -1, -1};
    int col_dir[] = {1, 0, -1, 1, -1, 1, 0, -1};
    if(carry + warehouse[row][col].p->getWeight() >= 100) {
        // print out queue and then clear

    }

    queue<Product> q;
    q.push(warehouse[row][col]);
    while(!q.empty()) {
        
    }
    visited[row][col] = true;

    for (int i = 0; i < 8; i ++) {
        if (checkBoundary(row + row_dir[i], col + col_dir[i], visited))
            DFS(warehouse, row + row_dir[i], col + col_dir[i], visited);
    }
}


int main() {

    Position warehouse[100][100];
    for (int i = 0; i < 100; i ++) {
        for (int j = 0; j < 100; j ++) {
            warehouse[i][j].p = NULL;
            warehouse[i][j].visited = false;
        }
    }
    ifstream infile;
    infile.open("programming2019-master/2a.in");
    string line;
    getline(infile, line);
    stringstream sin(line);
    int robot_num;
    sin.ignore(256, ',');
    sin >> robot_num;
    int items_num;
    sin.ignore(256, ',');
    sin >> items_num;
    int obstacles_num;
    sin.ignore(256, ',');
    sin >> obstacles_num;
    vector<Product> v;
    while (getline(infile, line)) {
        stringstream sin(line);
        int x, y, pd_num;
        double weight;
        sin.ignore(256, '(');
        sin >> x;
        sin.ignore(256, ',');
        sin >> y;
        sin.ignore(256, ',');
        sin >> pd_num;
        sin.ignore(256, ',');
        sin >> weight;
        sin.ignore(256, ')');
        // construct a product
        insert(warehouse, x, y, pd_num, weight);
        bool Existed = false;
        if(!v.empty()) {
            for (int i = 0; i < v.size(); i++){
                if (v[i].getX() == x && v[i].getY() == y && v[i].getProductNum() == pd_num && v[i].getWeight() == weight) {
                    warehouse[x][y].p->setQty(warehouse[x][y].p->getQty() + 1);
                    Existed = true;
                }
            }
        }
        if (!Existed)
            v.push_back(*(warehouse[x][y].p));
        // // check duplicated
        // if (!g1.empty()) {
        //     checkDup(g1, p1);
        // }
         
    }
    for(int i =0; i<100;i++){
            for(int j=0;j<100;j++){
                if (warehouse[i][j].p != NULL) {
                    cout << warehouse[i][j].p->getProductNum()<<endl;
                }
            }
        }

}

