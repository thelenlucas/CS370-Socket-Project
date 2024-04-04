#pragma once

// Dynamically growing list
// grows by increasing size by a factor of 1/2 when full
template <typename T>
class List {
private:
    T* data;
    bool* valid;
    int size;
    int capacity;
    // Increases the capacity of the list
    void increaseCapacity();
public:
    // Constructor
    List();
    // Constructs with initial capacity
    List(int capacity);
    // Destructor
    ~List();
    // Copy constructor
    List(const List<T>& other);
    // Assignment operator
    List<T>& operator=(const List<T>& other);
    // Adds an element to the end of the list
    void append(T elem);
    // Adds an element to the first empty spot in the list
    void add(T elem);
    // Removes an element from the list
    void remove(int index);
    // Gets the size of the list
    int getSize() const;
    // Gets the capacity of the list
    int getCapacity() const;
};