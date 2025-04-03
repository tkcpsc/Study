public class Pizza {
    
    // Encapsulation - restricting access to objects internal state. 
    private String size;
    private double cheese;
    private double pepperoni;
    private double veggies;

    // Default Constructor
    public Pizza(){
        this.size = "small";
        this.cheese = 0;
        this.pepperoni = 0;
        this.veggies = 0;
    }

    // Overloaded Constructor
    public Pizza(String size, double cheese, double pepperoni, double veggies) {
        this.size = size;
        this.cheese = cheese;
        this.pepperoni = pepperoni;
        this.veggies = veggies;
    }

    // (Accessor / Getter) methods.
    // Encapsulation - Exposing only what is necessary through public methods.
    public String getSize() {
        return this.size;
    }
    public double getCheese() {
        return this.cheese;
    }
    public double getPepperoni() {
        return this.pepperoni;
    }
    public double getVeggies() {
        return this.veggies;
    }

    // Mutator / Setter methods;
    // Encapsulation - requiring all interactions to occur through well-defined interfaces.
    public void setSize(String size) {
        this.size = size;
    }
    public void setCheese(double cheese) {
        this.cheese = cheese;
    }
    public void setPepperoni(double pepperoni) {
        this.pepperoni = pepperoni;
    }
    public void setVeggies(double veggies) {
        this.veggies = veggies;
    }

    // Direct Reference Assignment
    // Shallow Copy Constructor - copies primative(int, double, string, etc...) fields directly, references are copied (points to same object).
    public Pizza(Pizza pizza) {
        this.size = pizza.size;
        this.cheese = pizza.cheese;
        this.pepperoni = pizza.pepperoni;
        this.veggies = pizza.veggies;
    }

    // Deep Copy Constructor
    // public Pizza(Pizza pizza) {
    //     this.size = pizza.size;
    //     this.cheese = pizza.cheese;
    //     this.pepperoni = pizza.pepperoni;
    //     // Imagine Veggies is an object with atribute.
    //     this.veggies = new Veggies(pizza.veggies); // This creates a new Veggies object and then assigns it to that.
    // }
    public double calcCost() {
        double cost; 
        cost =  (this.size.equalsIgnoreCase("Small")) ? 10:
                (this.size.equalsIgnoreCase("Medium")) ? 15:
                (this.size.equalsIgnoreCase("Large")) ? 20:0;

        return cost+this.cheese+this.pepperoni+this.veggies;
    }

    public boolean equals(Pizza pizza) {
        return this.size == pizza.size 
        && this.cheese == pizza.cheese 
        && this.pepperoni == pizza.pepperoni
        && this.veggies == pizza.veggies;
    }

    public String toString() {
        return "Size: " + this.size + "\n" +
        "Cheese: " + this.cheese + "\n" +
        "Pepperoni: " + this.pepperoni + "\n" +
        "Veggies: " + this.veggies + "\n" + 
        "Cost: " + calcCost() + "\n\n";
    }

}
