#ifndef _HOSPITAL_H_
#define _HOSPITAL_H_

#include<string>
#include"admin.hpp"
class hospital {

    friend class admin;    
    std::string hospital_name , license_id , blood_group;
    int amount_of_blood;

    public:

    hospital(std::string hospital_name="NONE" , std::string license_id="XXXXXXXX" ,std::string blood_group="O+" ,int amount_of_blood=1L)
    :hospital_name {hospital_name} , license_id {license_id} , blood_group {blood_group} ,amount_of_blood {amount_of_blood} {
    }
    
    ~hospital(){
    }

    void hospital_request();

    void display() const;
};

#endif