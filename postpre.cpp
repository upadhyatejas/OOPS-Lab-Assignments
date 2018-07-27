#include <iostream>

using namespace std;



class Integer {

    private:

        int value;

    public:

        Integer(int v) : value(v) { }

        Integer operator++();

        Integer operator++(int);

        int getValue() {

            return value;

        }

};



// Pre-increment Operator

Integer Integer::operator++()

{

    value++;

    return *this;

}



// Post-increment Operator

Integer Integer::operator++(int)

{

    const Integer old(*this);

    ++(*this);

    return old;

}



int main()

{

    Integer i(10);



    cout << "Post Increment Operator" << endl;

    cout << "Integer++ : " << (i++).getValue() << endl;

    cout << "Pre Increment Operator" << endl;

    cout << "++Integer : " << (++i).getValue() << endl;
}
