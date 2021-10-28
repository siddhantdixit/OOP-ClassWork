#include"user.hpp"
#include<fstream>


// user::user(int age , int weight , int amount_of_blood, std::string name, std::string health){
// }

// user::~user(){
// }

void user::display() const{
    std::cout << "#####################################" << std::endl<<std::endl;
    std::cout << "Donors Name: " << name << std::endl;
    std::cout << "Donors age: " << age << std::endl;
    std::cout << "Donors Weight: " << weight << std::endl;
    std::cout << "Have  Donor ever been sick?: " << health_ill_status << std::endl;
    std::cout << "Donors Blood Group: " << blood_group << std::endl;
    std::cout << "Blood Quantity Available: " <<amount_of_blood << "ml" << std::endl;
    std::cout << "######################################" << std::endl;
    }

void user::registration(){
    std::ofstream out_file;
    user new_info;
    std::cout<<"=============================USER REGISTRATION PORTAL=============================";
    std::cout<<"==================================================================================";
    
    std::cout<<"\nEnter the doner name :"<<std::endl;
    std::cin>>new_info.name;
    std::cout<<"\nEnter your age:"<<std::endl;
    std::cin>>new_info.age;
    
    if(new_info.age<18){
        std::cout<<"SORRY YOU ARE NOT ELIGIBLE TO DONATE BLOOD"<<std::endl;
        return ;
    }
    std::cout<<"\nEnter your weight (KG)"<<std::endl;
    std::cin>>new_info.weight;
    
    if (new_info.weight<40){
        std::cout<<"SORRY YOU ARE NOT ELIGIBLE TO DONATE BLOOD"<<std::endl;
        return ;
    }

    std::cout<<"\nHAVE YOU BEEN ILL IN YOUR LAST 6 MONTH?(yes/no)"<<std::endl;
    std::cin>>new_info.health_ill_status;

    std::cout<<"\nENTER YOUR BLOOD GROUP"<<std::endl;
    std::cin>>new_info.blood_group;

    std::cout<<"\nENTER THE QUANTITY OF BLOOD YOU WANT TO DONATE (ML)"<<std::endl;
    std::cin>>new_info.amount_of_blood;

    {
        std::cout<<"DO YOU AGREE TO SUMBMIT DETAIL FOR REGISTRATION"<<std::endl;
        std::string response {};
        std::cin>>response;
        if(response == "no" || response == "NO" )
        return ;
    }
    
    std::cout<< "YOUR FORM IS SUBMITTED FOR APPORVAL" << std::endl;
    new_info.display();
    out_file.open("data/new_donor.txt", std::ios::app);


    out_file<< new_info.name << std::endl << new_info.age << std::endl << new_info.weight << std::endl << new_info.health_ill_status 
    << std::endl << new_info.blood_group << std::endl << new_info.amount_of_blood << std::endl<< new_info.date  ;
    // out_file.write((char*)&new_info, sizeof(new_info));
    out_file.close();
    return ;
}