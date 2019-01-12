/*
    this is the header file for Product class
    Name: Product.h
    Author: Yifan Cui
*/

#ifndef _PRODUCT_H
#define _PRODUCT_H

#include <string>
#include <iostream>
using namespace std;

class Product {
private:
    int x; //x_loc
    int y; //y_loc
    int productNum; //product number
    double weight;  //product weight
    int qty;    //product quantity
    
public:
    //constructor
    product (int x, int y, int productNum, double weight, int qty);
    product();

    //mutator
    void setQty(int x);
    void setX(int x);
    void setY(int y);
    void setProductNum(int productNum);
    void setWeight (double weight);

    //accessor
    int getProductNum();
    int getX();
    int getY();
    double getWeight();
    int getQty();
    
};

#endif 

