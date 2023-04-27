# Furit picker
In here will explain the solution of my fruit random pickers that will count the number picked from the number between 1 - 100. Object-Oriented Programming uses objects to represent real-world entities and concepts and allows them to interact with each other to achieve a desired behavior. The main goal of OOP is to organize code into reusable and modular structures that are easy to maintain, modify, and extend. The core concepts of object-oriented programming, include encapsulation, inheritance, polymorphism, and abstraction.

## Solution

The code uses OOP principles by defining two classes, which are the `FruitSymbol` and `FruitList`.

The `FruitSymbol` class represents a fruit symbol with its name, weight, and count. It has a constructor that initializes these attributes and getter methods to access these attributes. The `incrementCount()` method is used to increment the count of the fruit symbol each time it is picked by a picker.

The `FruitList` class represents a list of fruit symbols. It has a constructor that initializes the list of fruit symbols with their names and weights. The `picker()` method performs a random selection between 1-100 and updates the count of the corresponding fruit symbol using the `incrementCount()` method.

The `main()` function creates an object of the `FruitList` class and performs 15 random selections by calling the `picker()` method of the object. Therefore, the code is implementing OOP by defining classes with attributes and methods to represent and manipulate data.

## OOP concept

In my solution, it uses the encapsulation and abstract concepts in OOP:

The classes `FruitSymbol` and `FruitList` encapsulate the data and methods related to fruit symbols and fruit lists, respectively. The data members of the classes are declared private, and access to them is provided through public methods.

The classes `FruitSymbol` and `FruitList` provide an abstraction of fruit symbols and fruit lists, respectively. They hide the implementation details of the data and methods from the user and provide a simplified interface to work with the data.