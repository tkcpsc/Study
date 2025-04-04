class Pizza:
    def __init__(self, size, cheese, pepperoni, veggies):
        self.size = size
        self.cheese = cheese
        self.pepperoni = pepperoni
        self.veggies = veggies

    def calcCost(self):
        total = 0
        total += 10 if self.size == "small" else 15 if self.size == "medium" else 20 if self.size == "large" else 0
        return total + self.cheese + self.pepperoni + self.veggies

    def __str__(self):
        ret = "Size: " + self.size + "\n"
        ret += "Cheese: " + str(self.cheese) + "\n"
        ret += "Pepperoni: " + str(self.pepperoni) + "\n"
        ret += "Veggies: " + str(self.veggies) + "\n"
        ret += "Cost: " + str(self.calcCost()) + "\n"

        return ret



class PizzaOrder:
    def __init__(self, num_pizzas):
        self.num_pizzas = num_pizzas
        

    def __str__(self):
        pass