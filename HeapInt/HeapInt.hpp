#ifndef HEAPINT_H
#define HEAPINT_H

#include <iostream>

using namespace std;

class HeapInt{
    private:
        int * _valor;
    
    public:
        HeapInt();
        HeapInt(int);
        HeapInt(const HeapInt&);
        ~HeapInt();

        HeapInt& operator=(int);
        HeapInt& operator=(const HeapInt&);
        HeapInt operator+(const HeapInt&) const;
        HeapInt operator-(const HeapInt&) const;
        bool operator==(const HeapInt&) const;
        friend ostream& operator<<(ostream&, const HeapInt&);
        friend istream& operator>>(istream&, HeapInt&);
};

#endif