/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ninan3
 *
 * Created on January 12, 2019, 12:52 PM
 */
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

/*
 * 
 */

class product {
private:
    int x;
    int y;
    int productNum;
    double weight;
    int qty;
    
public:
    void setQty(int x){
        qty = x;
    }
    int getProductNum(){
        return productNum;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    double getWeight(){
        return weight;
    }
    int getQty(){
        return qty;
    }
    product (int x, int y, int productNum, double weight, int qty){
        this->x = x;
        this->y = y;
        this->productNum = productNum;
        this->weight = weight;
        this->qty = qty;
    }
    void setX(int x){
        this->x = x;
    }
    void setY(int y){
        this->y = y;
    }
    
    void setProductNum(int productNum){
        this->productNum = productNum;
    }
    void setWeight (double weight){
        this->weight = weight;
    }
    
    product(){
    }
};

void sort (vector <product> & v, int n);
void swap (product &p1, product &p2);
void print(vector <product> &v);
int main(int argc, char** argv) {

    vector <product> v;
    
    
    string filename;
    cin >> filename;
    
    ifstream myfile;
    myfile.open(filename);
    
    
    string line;
    while (getline(myfile, line)){
        
        stringstream sin(line);
        char a;
        int x;
        int y;
        int productNum;
        double weight;
        bool duplicate = false;
        sin >> a;
        sin >> x;
        sin >> a;
        sin >> y;
        sin >> a;
        sin >> productNum;
        sin >> a;
        sin >> weight;
        sin >> a;
        
        for (int i = 0; i < v.size(); i++){
                if (v[i].getX() == x && v[i].getY() == y && v[i].getProductNum() == productNum && v[i].getWeight() == weight){
                    v[i].setQty(v[i].getQty() + 1);
                    duplicate = true;
            }
        }
        
        if (duplicate == false){
            product newProduct(x, y, productNum, weight, 1);
            v.push_back(newProduct);
        }
    }

    sort (v, v.size());
    print (v);
    
    return 0;
}

void sort (vector <product> & v, int n){
    int i, j;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i -1; j++){
            if (v[j].getProductNum() > v[j+1].getProductNum())
                swap (v[j], v[j+1]);
                
        }
    }
}


void swap (product &p1, product &p2){
    product temp (p1.getX(), p1.getY(), p1.getProductNum(), p1.getWeight(), p1.getQty());
    p1.setX(p2.getX());
    p1.setY(p2.getY());
    p1.setProductNum(p2.getProductNum());
    p1.setWeight(p2.getWeight());
    p1.setQty(p2.getQty());
    
    p2.setX(temp.getX());
    p2.setY(temp.getY());
    p2.setProductNum(temp.getProductNum());
    p2.setWeight(temp.getWeight());
    p2.setQty(temp.getQty());
    
}

void print(vector <product> &v){
    for (int i = 0; i < v.size(); i++){
        cout <<"Produce Number: " << v[i].getProductNum() << "; weight: ";
        cout << fixed;
        cout << setprecision(1);
        cout << v[i].getWeight();
        cout << "; Qty: " << v[i].getQty() << "; Location: ("
             << v[i].getX() << ", " << v[i].getY() << ")" << endl;
    }
}
