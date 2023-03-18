#include <iostream>


int main()
{
        int var1 {123};
        std::cout<<"var1 is : " << var1 << std::endl;

        var1 = 55; // Assign
        std::cout<< "var1 : " << var1 << std::endl;

        std::cout<<std::endl;

        std::cout<<"*******************"<<std::endl;

        double var2 {44.55}; // Declare and initialize
        std::cout<<"var2 : " << var2 <<std::endl;

        var2 = 33.44; //Assign
        std::cout << "var2 is : " << var2 << std::endl;

        std::cout<<std::endl;

        std::cout<<"*******************"<<std::endl;

        bool state{false}; // Declare and initialize
        std::cout<<std::boolalpha;
        std::cout<< "state is : " << state << std::endl;

        state = true;
        std::cout<< "state is : " << state << std::endl;

        std::cout<<std::endl;
        std::cout<<"************" << std::endl;
        //Auto type deduction
        // Careful about auto assignments

        auto var3 {333u}; // Declare and initalize with type deduction
        var3 = -22;  // Assign negative number. Danger !

        std::cout<<"var3 is : " << var3 << std::endl;
        return 0;
}