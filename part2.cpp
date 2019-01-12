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
#include "Graph.h"
using namespace std;


int main() {
    ifstream infile;
    infile.open("programming2019-master/2a.in");
    int robot_num;
    infile >> robot_num;
    int items_num;
    infile >> items_num;
    int obstacles_num;
    infile >> obstacles_num;
    while (items_num) {
        items_num--;
        int x, y, pd_num;
        double weight;
        infile >> x;
        infile >> y;
        infile >> pd_num;
        infile >> weight;
        // construct a product
        // check duplicated

         
    }

}

