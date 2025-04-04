from Pizza import Pizza
from Pizza import PizzaOrder

def main():
    pizza1 = Pizza("small", 1, 0, 1)
    pizza2 = Pizza("large", 2, 2, 0)
    print(pizza1)
    pizza3 = Pizza(pizza2)
    pizza4 = Pizza(pizza1)
    # order = PizzaOrder(3)
    # print(order.addPizza(pizza1))
    # print(order.addPizza(pizza2))
    # print(order.addPizza(pizza3))
    # print(order.addPizza(pizza4))
    # print(pizza1==pizza3)
    # print(order)

if __name__ == "__main__":
    main()