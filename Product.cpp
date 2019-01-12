#include "Product.h"
void Product::setQty(int x){
    qty = x;
}
int Product::getProductNum(){
    return productNum;
}
int Product::getX(){
    return x;
}
int Product::getY(){
    return y;
}
double getWeight(){
    return weight;
}
int getQty(){
    return qty;
}
Product::Product (int x, int y, int productNum, double weight, int qty){
    this->x = x;
    this->y = y;
    this->productNum = productNum;
    this->weight = weight;
    this->qty = qty;
}
void Product::setX(int x){
    this->x = x;
}
void Product::setY(int y){
    this->y = y;
}

void Product::setProductNum(int productNum){
    this->productNum = productNum;
}
void Product::setWeight (double weight){
    this->weight = weight;
}

Product::Product(){
}