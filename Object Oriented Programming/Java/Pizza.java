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

    // Encapsulation - Exposing only what is necessary through public methods.
    public String getSize(){
        return this.size;
    }

}
