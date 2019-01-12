#include "Product.h"
using namespace std;

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
double Product::getWeight(){
    return weight;
}
int Product::getQty(){
    return qty;
}
Product::Product (int x, int y, int productNum, double weight){
    this->x = x;
    this->y = y;
    this->productNum = productNum;
    this->weight = weight;
    this->qty = 1;
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

Product&  Product::operator=(const Product& p1) {
    this->x = p1.x;
    this->y = p1.y;
    this->productNum = p1.productNum;
    this->weight = p1.weight;
    this->qty = 1;
    return *this;
}