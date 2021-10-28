#ifndef _ADMIN_H_
#define _ADMIN_H_

#include"user.hpp"
#include"hospital.hpp"

class admin{
    public:
    admin(){
    }
    
    ~admin(){
    }

    void menu();

    void donor_application();

    void blood_sample_list();

    void hospital_manage();


};

#endif