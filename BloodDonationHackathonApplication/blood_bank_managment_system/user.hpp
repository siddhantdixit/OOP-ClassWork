#ifndef _USER_H_
#define _USER_H_

#include"admin.hpp"
#include<string>
#include<iostream>
class user{
    friend void blood_sample();
    friend class admin;
    int age , weight , amount_of_blood;
    std::string  name, health_ill_status , blood_group ,date;
    
    public:

    user(int age=18 , int weight=40 , int amount_of_blood=500,
    std::string name="NONE", std::string health_ill_status="NO" , std::string blood_group="o+" ,std::string date="DD/MM/YYYY")
    :age {age} ,weight{weight} , amount_of_blood {amount_of_blood} , name {name}, health_ill_status{health_ill_status}, blood_group {blood_group} , date {date}{
    }

    ~user(){

    }

    void registration();

    void display() const;
};

#endif