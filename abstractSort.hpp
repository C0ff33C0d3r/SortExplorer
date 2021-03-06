#ifndef _ABSTRACTSORT_H
#define _ABSTRACTSORT_H

#include <SFML/System.hpp>

template <typename T>
class AbstractSort {
   public:
    virtual void operator()(T* arr, size_t size) = 0;  // Virtual sort function

   private:
};

template <typename T>
class AnnotatedSort : public AbstractSort<T> {
   public:
    virtual const char* getName() = 0;          // Function that returns the name of the sort
    virtual sf::Color getPrimaryColor() = 0;    // Function that returns primary color of the button
    virtual sf::Color getSecondaryColor() = 0;  // Function that returns secondary color of the button
};

#endif