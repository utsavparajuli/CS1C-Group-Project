 #ifndef VECTOR_H
#define VECTOR_H
#include <stdexcept>
#include <iostream>

/*! \file vector.h
 *  \brief A file defining the vector class methods.
 */

const int STARTSIZE = 8;


namespace  custom {

/*!
 * \brief The vector class is a container class which can hold elements of any type.
 *
 * The vector class functions similarly to an array. It stores elements of any chosen type sequentially and can access the elements in the same manner as an array can. The vector
 * class offers several methods to perform various manipulations on the container. The vector offers methods to add, delete, compare, assign, and more. Iterators are implemented and
 * can be used to write algorithms. Vector is templated and accepts any type, with its type referred to as T throughout this documentation.
 */

template<typename T>
class vector
{
public:
  
    /* default constructor */
    /*!
     * \brief Constructor by default creates a vector object  with a size_v of 0, a space of 0, and an elem member variable holding nullptr.
     */

    vector() :size_v{ 0 }, elem{ nullptr }, space{ 0 }
    {}

    /* overloaded constructor */
    /*!
     * \brief Constructor accepts an integer initial size and assigns it to space, creates a new array with size space, and points elem to its base.
     * \param s is an integer holding the initial space occupied within the vector, assigned to the vector's space member variable.
     */

    explicit vector(int s) : size_v{ 0 }, space{ s }
    {
        elem = new T[s];
    }

    /* copy constructor */
    /*!
     * \brief Copy constructor accepts a constant reference to a vector object and constructs a new vector with copies of the passed vector's data.
     * \param rhs is a constant reference to a vector object whose data is copied to the new vector.
     */

    vector(const vector& rhs) : space{ rhs.space }, size_v{ rhs.size_v }
    {
        elem = new T[rhs.space];
        for (int i = 0; i < size_v; i++)
        {
            *(elem + i) = *(rhs.elem + i);
        }
    }//end of vector(const vector&)

    /* copy assignment */
    /*!
     * \brief Copy assignment operator accepts a constant reference to a vector object and replaces the calling vector's data with copies of the passed vector's data.
     *
     * The copy assignment method ensures that the calling vector is not the same vector as is being passed as an argument. The calling vector's elem member variable
     * is deleted and reconstructed with the passed vector's data. size_v and space data members are also copied.
     * \param rhs is a constant reference to a vector object whose data is to be copied to the calling vector.
     * \return An address of a vector object with copied data.
     */

    vector& operator=(const vector& rhs) // copy assignment
    {
        if (this != &rhs)
        {
            if (size_v <= rhs.size_v) //if vector is less that rhs
            {
                delete[] elem;
                elem = new T[rhs.space];
                size_v = rhs.size_v;
                space = rhs.space;
            }
            else
            {
                size_v = rhs.size_v;
            }
            for (int i = 0; i < size_v; i++)
                *(elem + i) = *(rhs.elem + i);
        }
        return  *this;
    }

    /* move constructor */
    /*!
     * \brief Move constructor accepts a reference to a vector object rvalue and copies the passed object's data into the caller.
     *
     * The passed vector object has its data copied, storing it into the calling vector. The passed vector then has its data changed to default values. The calling vector's
     * size_v, space, and elem member variables are all assigned to those which are stored in the passed vector.
     * \param rhs is a reference to a vector object rvalue whose data is to be moved into the calling vector and whose data will be assigned default values afterward.
     */

    vector(vector&& rhs) noexcept // move constructor
        :size_v{ rhs.size_v }, space{ rhs.space }
    {
        elem = rhs.elem;
        rhs.elem = nullptr;
        rhs.size_v = 0;
        rhs.space = 0;
    }
  
    /* move constructor */
    /*!
     * \brief Overloaded move constructor accepts a reference to a vector object rvalue and pilfers the passed object's data, storing it into the calling vector.
     *
     * The overloaded move constructor copies the passed vector object's data into the calling vector object. A check is performed to ensure the calling vector is not
     * the same as the passed vector. The calling vector has its array of values deleted and replaced. The passed vector is empty after the operation completes.
     * \param rhs is a reference to a vector object rvalue whose data is to be moved into the calling vector and whose data will be assigned default values afterward.
     */

    vector& operator=(vector&& rhs) noexcept // move assignment
    {
        if (this != &rhs)
        {
            delete[] elem;
            elem = rhs.elem;
            size_v = rhs.size_v;
            space = rhs.space;

            rhs.elem = nullptr;
            rhs.size_v = 0;
            rhs.space = 0;
        }
        return *this;
    }


    /* destructor */
    /*!
     * \brief Destructor will automatically destroy the vector object when appropriate.
     *
     * The vector object's elem array is deleted to free dynamically allocated memory. elem is set to nullptr.
     */

    ~vector() // destructor
    {
        delete[] elem;
        elem = nullptr;
    }

    /* overloaded subscript operator */
    /*!
     * \brief Overloaded subscript operator accepts an integer argument as an index and returns a constant reference to the vector's type T.
     *
     * The overloaded subscript operator ensures that the index passed does not go out of bounds of the vector's array. If this occurs, an exception is thrown. Otherwise,
     * the value held in the elem array at the desired index is returned.
     * \param index is an integer specifying which element of the vector's elem array will be returned.
     * \return A constant reference to a value of vector's type T.
     */

    const T& operator[] (int index) // access: return reference
    {
        if (index >= size_v)
        {
            throw std::out_of_range("This is out of range of the vector. Invalid access.");
        }
        return elem[index];
    }

    /* size */
    /*!
     * \brief Function returns the current size of the vector. Function is constant.
     * \return Integer value holding the current size of the vector.
     */

    int size() const // the current size
    {
        return size_v;
    }

    /* capacity */
    /*!
     * \brief Function returns the current available space of the vector. Function is constant.
     * \return Integer value holding the current max capacity.
     */

    int capacity() const // current available space
    {
        return space;
    }

    /* resize */
    /*!
     * \brief Function accepts an integer and re-sizes the vector to match the argument.
     *
     * The vector's current contents pointed to by elem are copied into a new array of type T. The original array is destroyed and the vector contains
     * a new array with size newsize.
     * \param newsize is an integer to increase the vector's size to.
     */
 
    void resize(int newsize) // grow
    {

        T* temp = new T[newsize];
        int i = 0;
        for (i; i < newsize; i++)
        {
            if (i < size_v)
                temp[i] = elem[i];
        }
        // this is not like the real STL vector
        //where we can accept another default argument to initialize
        //data if our old vector is smaller that the resize, this means
        // the default constructor will be used.

        size_v = newsize;
        space = newsize;
        delete[] elem;
        elem = temp;
        temp = nullptr;
    }

    /* push_back */
    /*!
     * \brief Function accepts an argument of templated type T and adds it to the back of the vector's array.
     *
     * The vector is checked for free space to add the new value. If there is space available, the new value is added. Otherwise, the reserve function is called
     * to create enough new space for the new value.
     * \param val is of templated type T and holds the new value to be added to the vector.
     */

    void push_back(T val) // add element
    {
        if (size_v < space)
        {
            elem[size_v] = val;
            size_v++;
        }
        else
        {
            if(space == 0)// check for empty vector
            {
                reserve(STARTSIZE);
                elem[size_v] = val;
                size_v++;
            }
            else
            {
                reserve(space*2);
                elem[size_v] = val;
                size_v++;
            }
        }
    }

    /* reserve */
    /*!
     * \brief Function accepts an integer argument and dynamically allocates that many bytes to the vector's array size if it is greater than the amount of free space available.
     * \param newalloc is an integer holding the number of bytes to increase the vector's array by.
     */

    void reserve(int newalloc) // get more space
    {
        if (newalloc > space)
        {
            T* temp = new T[newalloc];
            for (int i = 0; i < size_v; i++)
            {
                temp[i] = elem[i];
            }
            delete[] elem;
            elem = temp;
            temp = nullptr;
            space = newalloc;
        }
    }

  /* DEFINING ITERATOR SPECIFIC TO VECTOR */

    using iterator = T * ;
  //Const-qualified Iterator Type
    using const_iterator = const T*;

    /* begin */
    /*!
     * \brief Function returns an iterator pointing to the first element of the vector.
     * \return An iterator which points to the first element of the vector.
     */

    iterator begin() // points to first element
    {
        return elem;
    }

    /* begin */
    /*!
     * \brief Function returns a const_iterator pointing to the first element of the vector. Function is constant.
     * \return A const_iterator which points to the first element of the vector.
     */

    const_iterator begin() const
    {
        return elem;
    }

    /* end */
    /*!
     * \brief Function returns an iterator pointing to one beyond the element of the vector. Function is constant.
     * \return An iterator which points to one beyond the last element of the vector.
     */

    iterator end() // points to one beyond the last element
    {
        return (elem + size_v);
    }

    /* end */
    /*!
     * \brief Function returns a const_iterator pointing to one beyond the element of the vector. Function is constant.
     * \return A const_iterator which points to one beyond the last element of the vector.
     */

    const_iterator end() const
    {
        return elem + size_v;
    }

    /* insert */
    /*!
     * \brief Function accepts an iterator argument and an element argument of templated type T and adds the element at the location before the one held by the iterator.
     *
     * The vector is checked for free space to add the new value. If there is no space available, the vector's size will be extended to twice its current size. The contents of the
     * vector array are copied into a new array until the location held by iterator p is reached. When iterator p is reached, the new value is inserted at its position, and the rest
     * of the original vector array contents are copied into the new array afterward. The original vector array is destroyed and its pointer is assigned the new array.
     * \param p is an iterator and holds the desired location for the new value to be inserted into.
     * \param v is of templated type T and holds the new value to be added to the vector.
     * \return An return iterator holding the location of the new element.
     */

    iterator insert(iterator p, const T& v)// insert a new element v before p
    {
        T* temp = nullptr;
        if (size_v >= space)
        {
            temp = new T[size_v * 2];
            space = size_v * 2;
        }
        else
        {
            temp = new T[space];
        }
        int i = 0;
        iterator j;
        for (j = begin(); j != p; j++)
        {
            temp[i] = *j;
            i++;
        }
        iterator returnIt = temp + i;
        temp[i] = v;
        i++;

        for (j; j != end(); j++)
        {
            while (i < space)
            {
                temp[i] = *j;
                i++;
            }
        }

        size_v++;
        delete[] elem;
        elem = temp;
        temp = nullptr;

        return returnIt;
    }
     
    /* erase */
    /*!
     * \brief Function accepts an integer holding a desired index to delete from the vector.
     *
     * The contents of the vector array are copied into a new array until the index held by indexToDelete is reached. When indexToDelete is reached, the copying loop skips over its value
     * and continues its copy afterward. The newly copied array is assigned to elem, and the previous array pointed to by elem is destroyed. size_v is decremented.
     * \param indexToDelete is an integer and holds the index location whose occupying value will be removed from the vector.
     */

    void erase(int indexToDelete) // remove element pointed to by p
    {
        T* temp = new T[space];
        int x = 0;
        for(int i = 0; i < size_v; i++)
        {
            if(i != indexToDelete)
            {
                temp[x] = elem[i];
                x++;
            }
        }

        size_v--;

        delete[] elem;
        elem = temp;
        temp = nullptr;
    }
private:
      //CURRENT COUNT OF ELEMENTS IN INTERNAL ARRAY  
    /*!
     * \brief size_v is a private integer variable holding the current count of elements in the vector's array.
     */

    int size_v;

      //POINTER TO INTERNAL DYNAMIC ARRAY OF TEMPLATED TYPE
    /*!
     * \brief elem is a private pointer to a templayed type T which points to the dynamic array of the vector.
     */

    T* elem;

      //MAXIMUM SIZE OF INTERNAL ARRAY
    /*!
     * \brief space is a private integer variable holding the current max size of the vector's array.
     */
    int space;
};
}
#endif // VECTOR_H

