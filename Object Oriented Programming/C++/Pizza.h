#ifndef PIZZA_H
#define PIZZA_H

#include <string>
using namespace std;


class Pizza {

private:
    string size;
    double cheese;
    double pepperoni;
    double veggies;


public:
    // Constructors
    Pizza();
    Pizza(const Pizza &pizza);
    Pizza(string size, double cheese, double pepperoni, double veggies);
    ~Pizza(); // Destructor - deallocates memory to prevent memory leaks.
    
    // Accessors
    string getSize();
    double getCheese();
    double getPepperoni();
    double getVeggies();

    // Mutators
    void setSize(string size);
    void setCheese(double Cheese);
    void setPepperoni(double Pepperoni);
    void setVeggies(double Veggies);

    // Equals method
    bool equals(const Pizza &pizza);

    // Methods
    double calcCost() const;

    // toString - "<<" operator overloading.
    string toString() const;
    friend ostream& operator<<(ostream& os, const Pizza& pizza);

};

Pizza::Pizza() {
    this->size = "small";
    this->cheese = 0;
    this->pepperoni = 0;
    this->veggies = 0;
}

Pizza::~Pizza() {

}

Pizza::Pizza(string size, double cheese, double pepperoni, double veggies) {
    this->size = size;
    this->cheese = cheese;
    this->pepperoni = pepperoni;
    this->veggies = veggies;
}

Pizza::Pizza(const Pizza &pizza) {
    this->size = pizza.size;
    this->cheese = pizza.cheese;
    this->pepperoni = pizza.pepperoni;
    this->veggies = pizza.veggies;
}



string Pizza::getSize() {
    return this->size;
}
double Pizza::getCheese() {
    return this->cheese;
}
double Pizza::getPepperoni() {
    return this->pepperoni;
}
double Pizza::getVeggies() {
    return this->veggies;
}



void Pizza::setSize(string size) {
    this->size = size;
}
void Pizza::setCheese(double cheese) {
    this->cheese = cheese;
}
void Pizza::setPepperoni(double pepperoni) {
    this->pepperoni = pepperoni;
}
void Pizza::setVeggies(double veggies) {
    this->veggies = veggies;
}

bool Pizza::equals(const Pizza &pizza) {
    return (this->size == pizza.size) &&
    (this->cheese == pizza.cheese) &&
    (this->pepperoni == pizza.pepperoni) &&
    (this->veggies == pizza.veggies);
}


double Pizza::calcCost() const {
    return (this->size == "small") || (this->size == "Small") ? 10 + this->cheese + this->pepperoni + this->veggies :
    (this->size == "medium") || (this->size == "Medium") ? 15 + this->cheese + this->pepperoni + this->veggies :
    (this->size == "large") || (this->size == "Large") ? 20 + this->cheese + this->pepperoni + this->veggies : 0;
}

string Pizza::toString() const {
    string ret = "";
    ret += "Size = " + size + "\n";
    ret += "Cheese = " + to_string(cheese) + "\n";
    ret += "Pepperoni = " + to_string(pepperoni) + "\n";
    ret += "Veggies = " + to_string(veggies) + "\n";
    ret += "Cost = $" + to_string(calcCost()) + "\n\n";
    return ret;
}
std::ostream& operator<<(std::ostream& os, const Pizza& pizza) {
    os << pizza.toString();
    return os;
}





#endif