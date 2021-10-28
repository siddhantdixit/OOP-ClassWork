#include "admin.hpp"
#include <fstream>
#include <filesystem>

void blood_sample(){
    bool status {false};
    std::ifstream in_file;
    in_file.open("data/accept.txt" , std::ios::in);  

    std::cout<< "=======================================BLOOD SAMPLE AVAILABLE===================================="<<std::endl; 
    std::cout<< "============================================================================================="<<std::endl;
    std::cout<<std::endl;
        
        while (!in_file.eof() && in_file)
        {

            user donor_info;
            in_file >> donor_info.name >> donor_info.age >> donor_info.weight >> donor_info.health_ill_status 
            >> donor_info.blood_group >> donor_info.amount_of_blood>>donor_info.date ;

            std::string blood_group_sample {} ;
            std::cout << "\nEnter the Blood Sample you want to check for its availability : ";
            std::cin >> blood_group_sample;
            if (donor_info.blood_group == blood_group_sample)
            {
                std::cout << "Blood Samples Available: " << std::endl;
                std::cout << "#####################################" << std::endl<<std::endl;
                std::cout << "Donors Name: " << donor_info.name << std::endl;
                std::cout << "Donors age: " << donor_info.age << std::endl;
                std::cout << "Donors Weight: " << donor_info.weight << std::endl;
                std::cout << "Have  Donor ever been sick?: " << donor_info.health_ill_status << std::endl;
                std::cout << "Donors Blood Group: " << donor_info.blood_group << std::endl;
                std::cout << "Blood Quantity Available: " << donor_info.amount_of_blood << "ml" << std::endl;
                std::cout << "######################################" << std::endl;
                status =true;
            }
          
           
        }
        if(!status){
                std::cout << "*********************************" << std::endl;
                std::cout << "No Blood Samples Available" << std::endl;
                std::cout << "**********************************" << std::endl;
        }
        in_file.close();
        return ;
}


int main()
{
    const std::string path = "data";

    try{
        if(std::filesystem::create_directory(path))
            std::cout << "Created a directory\n";
        else
            std::cerr << "already a directory exist with name data\n";\
        }catch(const std::exception& e){
            std::cerr << e.what() << '\n';
        }
    while (1)
    {
        std::cout << "====================================BLOOD DONATION SYSTEM====================================" << std::endl;
        std::cout << "=============================================================================================" << std::endl;
        std::cout <<std::endl;
        std::cout<<"1. User registration" <<std::endl
                << "2. Search Blood Sample Availability: " << std::endl
                << "3. Hospitals" << std::endl
                << "4. Admin  " <<std::endl
                << "5. Exit " <<std::endl;
        std::cout << "Select an option (1-5) to continue : ";
        int response {};
        
        std::cin >> response;

        switch (response)
        {
        case 1:
            {
                user a;
                a.registration();
            }

            break;
        case 2:
            {
                blood_sample();
            }
            break;
        case 3:
            {
                hospital obj;

                obj.hospital_request();

            }
            break;
        case 4:
            {
                admin administrator;
                administrator.menu();
            }
            break;
        case 5:
            return 0;
            break;
    
        default:
            std::cerr << "Invalid Option Selection";
            break;
        }
    }
    
}

void emergency_declare(){

    
    
}