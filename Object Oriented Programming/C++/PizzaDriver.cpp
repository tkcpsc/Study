#include "Pizza.h"
#include "PizzaOrder.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Pizza* pizza1 = new Pizza("small", 1, 0, 1); // Code to create a small pizza, 1 cheese, 1 veggie
    Pizza* pizza2 = new Pizza("large", 2, 2, 0); // Code to create a large pizza, 2 cheese, 2 pepperoni 
    Pizza* pizza3 = new Pizza(*pizza2);
    Pizza* pizza4 = new Pizza(*pizza1);
    PizzaOrder* order = new PizzaOrder(3);
    cout << order->addPizza(*pizza1) << endl;
    cout << order->addPizza(*pizza2) << endl;
    cout << order->addPizza(*pizza3) << endl;
    cout << order->addPizza(*pizza4) << endl;
    cout << pizza1->equals(*pizza3) << endl;
    // cout << (pizza1 == pizza3) << endl;
    cout << *order << endl;


    delete pizza1;
    delete pizza2;
    delete pizza3;
    delete pizza4;
}