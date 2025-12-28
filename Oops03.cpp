#include<iostream>
using namespace std;

class parents{
    public:
    int x;


    protected:
    int y;


    private:
    int z;
};

class child1 : public parents{
//  x will remains public
//  y will remains protected 
//  z will inaccesible 
};

class child2 : protected parents{
// x will private 
// y will remaions protected 
// z will inaccesible 
};

class child3 : private parents{
// x will private 
// y will private
// z will inaccesible 
};

int main(){

}
