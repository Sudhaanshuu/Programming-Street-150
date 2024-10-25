// ABSTRACTION: Abstract class with essential human properties
abstract class Person {
    protected String name;  // ENCAPSULATION: protected field
    abstract void express(); // ABSTRACTION: abstract method
}

// INHERITANCE: MyCrush inherits Person
class MyCrush extends Person {
    private String hobby;  // ENCAPSULATION: private field

    MyCrush(String name, String hobby) {
        this.name = name;
        this.hobby = hobby;
    }

    // POLYMORPHISM: Method implementation
    @Override
    void express() {
        System.out.println(name + " likes " + hobby);
    }
}

// INHERITANCE: Myself inherits MyCrush
class Myself extends MyCrush {
    // ENCAPSULATION: private field
    private boolean inLove = true;

    Myself(String name, String hobby) {
        super(name, hobby);
    }

    // POLYMORPHISM: Method overriding
    @Override
    void express() {
        System.out.println("I'm " + (inLove ? "in love with " : "just friends with") + name);
        super.express();
    }

    // POLYMORPHISM: Method overloading
    void express(String mood) {
        System.out.println("Feeling " + mood + " today!");
    }
}

public class MyLife {
    public static void main(String[] args) {
        // POLYMORPHISM: Using different object types
        Person crush = new MyCrush("She", "dancing");
        Myself me = new Myself("Sudhanshu", "reading");

        crush.express();    // Calls MyCrush's express
        me.express();       // Calls Myself's express
        me.express("happy"); // Calls overloaded express
    }
}