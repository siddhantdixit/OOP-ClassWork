#include"hospital.hpp"
#include<iostream>
#include<fstream>


void hospital::display() const{
    std::cout <<std::endl;
    std::cout << "#####################################";
    std::cout << "\nHospital name : "<<hospital_name;
    std::cout << "\nHospital license id : " << license_id;
    std::cout << "\nRequested Blood group : "<<blood_group;
    std::cout << "\nRequested Quantity (L) : "<<amount_of_blood;
    std::cout <<std::endl<< "######################################" << std::endl;
}

void hospital::hospital_request(){
     
  std::cout<< "============================HOSPITAL REGISTRATION PORTAL===========================" <<std::endl;
  std::cout<< "===================================================================================" <<std::endl;
  
  hospital info;
  std::cout << "\nEnter Hospital name :"<<std::endl;
  std::cin >> info.hospital_name;
  std::cout<<"\nEnter hospital license id:" << std::endl; 
  std::cin>>info.license_id;
  std::cout<<"\nRequested Blood group :"<<std::endl;
  std::cin>>info.blood_group;
  std::cout<<"\nRequested Quantity (ml):";
  std::cin>>info.amount_of_blood;

  std::cout<<"\nThanks for the details, your request will shortly be approved by the Bank"<<std::endl;

   std::ofstream out_file;

   out_file.open("data/hospitals.txt", std::ios::app);

  out_file<< info.hospital_name<< std::endl <<info.license_id<<std::endl <<info.blood_group << std::endl << info.amount_of_blood;
  out_file.close();

   return;
}