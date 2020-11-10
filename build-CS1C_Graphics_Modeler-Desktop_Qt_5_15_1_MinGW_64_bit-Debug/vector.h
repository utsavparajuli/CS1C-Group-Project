#ifndef VECTOR_H
#define VECTOR_H
#include <stdexcept>
#include <iostream>


const int STARTSIZE = 8;


namespace  custom {


template<typename T>
class vector
{
public:
  
    vector() :size_v{ 0 }, elem{ nullptr }, space{ 0 }
    {}

  
    explicit vector(int s) : size_v{ 0 }, space{ s }
    {
        elem = new T[s];
    }

    vector(const vector& rhs) : space{ rhs.space }, size_v{ rhs.size_v }
    {
        elem = new T[rhs.space];
        for (int i = 0; i < size_v; i++)
        {
            *(elem + i) = *(rhs.elem + i);
        }
    }//end of vector(const vector&)

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


    vector(vector&& rhs) noexcept // move constructor
        :size_v{ rhs.size_v }, space{ rhs.space }
    {
        elem = rhs.elem;
        rhs.elem = nullptr;
        rhs.size_v = 0;
        rhs.space = 0;
    }


  
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


    ~vector() // destructor
    {
        delete[] elem;
        elem = nullptr;
    }

    const T& operator[] (int index) // access: return reference
    {
        if (index >= size_v)
        {
            throw std::out_of_range("This is out of range of the vector. Invalid access.");
        }
        return elem[index];
    }

    int size() const // the current size
    {
        return size_v;
    }

    int capacity() const // current available space
    {
        return space;
    }

 
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


    iterator begin() // points to first element
    {
        return elem;
    }


    const_iterator begin() const
    {
        return elem;
    }


    iterator end() // points to one beyond the last element
    {
        return (elem + size_v);
    }


    const_iterator end() const
    {
        return elem + size_v;
    }

     
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
     
    iterator erase(iterator p) // remove element pointed to by p
    {
        T* temp = new T[space];
        int i = 0;
        iterator j;
        for (j= begin(); j < p; j++)
        {
            temp[i] = *j;
        }

        iterator returnIt = temp + i;
        i++;

        for (i; i < size_v; ++i)
        {
            temp[i] = *j;
            j++;
        }

        size_v--;

        delete[] elem;
        elem = temp;
        temp = nullptr;

        return returnIt;
    }
private:
      //CURRENT COUNT OF ELEMENTS IN INTERNAL ARRAY
    int size_v;
      //POINTER TO INTERNAL DYNAMIC ARRAY OF TEMPLATED TYPE
    T* elem;
      //MAXIMUM SIZE OF INTERNAL ARRAY
    int space;
};
}
#endif // VECTOR_H

