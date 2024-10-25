// Demonstrate OOP principles in a single Java program
class MyCrush {

  // Encapsulation: private properties with public getters and setters
  private String name = "My Crush";
  private String favoriteActivity = "Reading Books";

  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public String getFavoriteActivity() {
    return favoriteActivity;
  }

  public void setFavoriteActivity(String favoriteActivity) {
    this.favoriteActivity = favoriteActivity;
  }

  // Polymorphism: method that can be overridden
  public String expressFeelings() {
    return "A subtle smile and kind words.";
  }
}

class MyLife extends MyCrush { // Inheritance: MyLife inherits from MyCrush

  private String selfName = "MySelf";

  // Polymorphism: overriding method with personalized expression
  @Override
  public String expressFeelings() {
    return "An admiration beyond words.";
  }

  public void displayDetails() {
    // Abstraction: presenting high-level information without inner workings
    System.out.println("Self Name: " + selfName);
    System.out.println("Crush Name: " + getName());
    System.out.println("Favorite Activity of Crush: " + getFavoriteActivity());
    System.out.println("Feelings: " + expressFeelings());
  }
}

public class su {

  public static void main(String[] args) {
    MyLife myLife = new MyLife();
    myLife.setName("Her Name"); // set Crush name dynamically
    myLife.displayDetails();
  }
}
