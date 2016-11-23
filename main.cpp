//
//  main.cpp
//  Session 2 coding
//
//  Created by William Chambers on 16/11/2016.
//  Copyright © 2016 William Chambers. All rights reserved.
//

#include <iostream>
//wtf is goiing on
class Animal
{
public:
    Animal()
    : hungry (true)
    
    {
        
    }


~Animal(){};

void eat()
{
    hungry = false;
}

void areYouHungry()
{
    if (hungry)
        std::cout << "Yes Fam";
    
    else
        std::cout << "Nah Fam";
}

virtual void enjoyMeal()
{
    std:: cout << "Yum";
}


virtual void poo()
{
    std:: cout << "smellsls";
    
}



private:
bool hungry;
};


//---------------DOG------------

class Dog : public Animal
{
public:
    Dog(){}
    ~Dog(){}
    
    void enjoyMeal() override
    {
        std:: cout << "wof";
    }
};
//---------------CAT-------------
        class Cat : public Animal
        {
        public:
            Cat(){}
            ~Cat(){}
            
            void enjoyMeal() override
            {
                std:: cout << "Meow";
            }
        };
//--------------HOrse----------------
        class Horse : public Animal
        {
        public:
            Horse(){}
            ~Horse(){}
            
            void enjoyMeal() override
            {
                std:: cout << "NEigh";
            }
        };
//------------------------------
        
        
        

int main(int argc, const char * argv[]) {
    Dog jeff;
    Cat Maclomcomc;
    
    Animal *animals[2];
    
    
    
}
