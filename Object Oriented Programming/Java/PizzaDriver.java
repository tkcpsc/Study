


/**
 *  has main method in connection with Pizza.java and PizzaOrder.java
 */
public class PizzaDriver {
    /** The main method. Exercises the Pizza class and PizzaOrder class functionality.
     * @param args The command line arguments (not used)
    */

    public static void main(String[] args) {
        Pizza pizza1 = new Pizza("small", 1, 0, 1); // Code to create a small pizza, 1 cheese, 1 veggie
        Pizza pizza2 = new Pizza("large", 2, 2, 0); // Code to create a large pizza, 2 cheese, 2 pepperoni 
        Pizza pizza3 = new Pizza(pizza2); // Same as pizza 2, use copy constructor
        Pizza pizza4 = new Pizza(pizza1); // Same as pizza 1, use copy constructor
        // PizzaOrder order = new PizzaOrder(3);// Code to create an order of THREE pizzas
        // System.out.println(order.addPizza(pizza1)); // add pizza1 to the order 
        // System.out.println(order.addPizza(pizza2)); // add pizza2 to the order
        // System.out.println(order.addPizza(pizza3)); // add pizza3 to the order  
        // System.out.println(order.addPizza(pizza4)); // add pizza4 to the order
        // System.out.println(pizza1.equals(pizza3));
        // System.out.println(order); // Should call order’s toString method

    }

}