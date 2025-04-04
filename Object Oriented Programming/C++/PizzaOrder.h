#ifndef PIZZAORDER_H
#define PIZZAORDER_H

#include <iostream>

class PizzaOrder {
    private:
        int num_pizzas;
        Pizza** order;


    public:
        PizzaOrder(int num_pizzas);
        ~PizzaOrder();
        double addPizza(const Pizza &pizza);
        string toString() const;
        friend ostream& operator<<(ostream& os, const PizzaOrder &order);
        double calcTotal() const;
};

PizzaOrder::PizzaOrder(int num_pizzas) {
    this->num_pizzas = num_pizzas;
    this->order = new Pizza*[this->num_pizzas];
    for (int i = 0; i < num_pizzas; i++) {
        this->order[i] = nullptr;
    }
}

PizzaOrder::~PizzaOrder() {
    delete[] order;
}

double PizzaOrder::addPizza(const Pizza &pizza) {
    for (int i = 0; i < this->num_pizzas; i++) {
        if (this->order[i] == nullptr) {
            this->order[i] = new Pizza(pizza);
            return 1;
        }
    }
    return -1;
}

double PizzaOrder::calcTotal() const {
    double total = 0;
    for (int i = 0; i < this->num_pizzas; i++) {
        if (this->order[i] != nullptr) {
            total += this->order[i]->calcCost();
        }
    }
    return total;
}

string PizzaOrder::toString() const {
    string ret = "";
    for (int i = 0; i < this->num_pizzas; i++) {
        if (this->order[i] != nullptr) {
            ret += this->order[i]->toString();
        }
    }
    return ret + "Total: " + to_string(calcTotal());
}

ostream& operator<<(ostream& os, const PizzaOrder &order) {
    os << order.toString();
    return os;
}







#endif