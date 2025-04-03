public class PizzaOrder {
    private Pizza order[];
    private int num_pizzas;

    public PizzaOrder(int num_pizzas) {
        this.num_pizzas = num_pizzas;
        this.order = new Pizza[num_pizzas];
    }

    public int addPizza(Pizza pizza) {
        for (int i = 0; i < this.num_pizzas; i++) {
            if (this.order[i] == null) {
                this.order[i] = new Pizza(pizza);
                return 1;
            }
        }
        return -1;
    }

    public double calcTotal() {
        double total = 0;
        for (int i = 0; i < this.order.length; i++) {
            if (this.order[i] != null) {
                total+=this.order[i].calcCost();
            }
        }
        return total;
    }

    public String toString() {
        String ret = "";
        for (int i = 0; i < this.order.length; i++) {
            if (this.order[i] != null) {
                ret += this.order[i];
            }
        }
        ret += "Total Order Cost: " + calcTotal();
        return ret;
    }
}
