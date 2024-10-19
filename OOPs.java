
import java.util.*;

//ENCAPSULATION --> Enables Data Hiding
class Pen {

    // Data members
    String color;
    String type;

    // Functions
    public void write() {
        System.out.println("Printing Something");
    }

    public void print() {
        System.out.println(this.color);
    }
}

// POLYMORPHISM
class Student {

    String name;
    int age;

    public void printname(String name) {
        System.out.println(name);
    }

    public void printage(int age) {
        System.out.println(age);
    }

    public void printall(String name, int age) {
        System.out.println(name);
        System.out.println(age);
    }
}

// INHERITANCE
// 1. Single level Inheritance
// 2. Multi level Inheritance
// 3. Heirarichal Inheritance
// 4. Hybrid Inheritance
class Shape {

    String color;
}

class Triangle extends Shape {

    public void area(int l, int h) {
        System.out.println(l * h);
    }
}

class Circle extends Shape {

    public void area(int r) {
        System.out.println(3.14 * r * r);
    }

    public void print() {
        System.out.println(color);
    }
}

// ABSTRACTION
// Animal class ka koi object nhi banega aur uske walk() function mai kya likha hai usse koi matlab nhi hai isiliye usko abstract kar do
abstract class Animal {

    // Abstract class can have both abstract and non abstract methods
    abstract void walks();

    Animal() {
        System.out.println("Base Constructor");
    }

    public void eat() {
        System.out.println("Animal Eats");
    }
}

// Sabse pehle base class ka constructor call hota hai then derived class ka.
class horse extends Animal {

    public void walks() {
        System.out.println("Walks on four legs");
    }

    horse() {
        System.out.println("Derived Constructor");
    }
}

class human extends Animal {

    public void walks() {
        System.out.println("Walks on two legs");
    }
}

// INTERFACES -- PURE ABSTRACTION
interface Ani {

    void walk();  // Abstract
    // Interface ke andar non abstract function and constructor nhi ho sakte.
    // In Interface, all fields are public , static and final.
    // In Interface, methods are public and abstract by default.
}

interface Herbivore {

}

class Horse implements Ani {

    public void walks() {
        System.out.println("Walks on four legs");
    }
}

// Multiple Inhertitance is possible in Interface not in Abstract class.Eg-
class Ghoda implements Ani, Herbivore {

    public void walks() {
        System.out.println("Walks on four legs");
    }
}

// MAIN CLASS
public class OOPs {

    public static void main(String[] args) {
        horse h = new horse();
        h.walks();
        h.eat();
    }
}
