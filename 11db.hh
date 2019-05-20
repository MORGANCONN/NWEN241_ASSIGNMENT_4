//
// Created by Connor on 20/05/2019.
//

#include "dbms2.hh"

namespace dbms2{
    class LinkedListDbTable : public AbstractDbTable{
        int rows() const ;
        bool show(int index) const;
        bool add(movie toAdd);
        bool remove(unsigned long int toRemove);
        const movie* get(int index) const;
        LinkedListDbTable();
        ~LinkedListDbTable();
    };
}