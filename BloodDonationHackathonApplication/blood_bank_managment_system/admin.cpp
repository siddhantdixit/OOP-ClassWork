#include"admin.hpp"
#include<fstream>

void admin::menu(){
    
    while(1){
    std::cout<< "=============================================ADMIN==========================================="<<std::endl; 
    std::cout<< "============================================================================================="<<std::endl;
    std::cout<<std::endl;
    std::cout<< "1. Donors applications" <<std::endl;
    std::cout<< "2. Blood Samples ." <<std::endl;
    std::cout<< "3. Hospitals manage"<<std::endl;
    // std::cout<< "4.Hospital blood Requests" <<std::endl;
    std::cout<< "4. Exit" <<std::endl<<std::endl;

    std::cout<< "Select an option to perform an operation:";
    int response {};
    std::cin>>response;
        switch(response)
        {
        case 1:
            {
                donor_application();
            }
            break;
        case 2:
            {
                blood_sample_list();
            }
            break;
        case 3:
            {
                hospital_manage();
            }
            break;
        case 4:
            {
                return ;
            }
            break;
        
        default:
        std::cout<<"invalid option selected"<<std::endl;
            break;
        }
    }
    

}

void admin::donor_application(){
    std::cout<< "=======================================DONORS APPLICATION===================================="<<std::endl; 
    std::cout<< "============================================================================================="<<std::endl;
    std::ifstream in_file;
    in_file.open("data/new_donor.txt" , std::ios::in);  
    user donor_apps;       
    while(!in_file.eof() && in_file)
    {
        

        std::cout<<std::endl;
        in_file >> donor_apps.name >> donor_apps.age >> donor_apps.weight >> donor_apps.health_ill_status 
        >> donor_apps.blood_group >> donor_apps.amount_of_blood >> donor_apps.date;
        std::cout << "#####################################" << std::endl;
        std::cout << "\nName :" << donor_apps.name;
        std::cout << "\nAge :" << donor_apps.age;
        std::cout << "\nAny illness:" << donor_apps.health_ill_status;
        std::cout << "\nBlood group:" <<donor_apps.blood_group ;
        std::cout << "\nQuantity :" << donor_apps.amount_of_blood;
        std::cout << "\n\n\n1. Accept" << std::endl<< "2. Reject" << std::endl;
        std::cout << "choose the option :";
        int response {};
        std::cin >> response;
        if (response == 1)
        {
            std::ofstream out_file;
            std::cout << "application is accepted" << std::endl;
            std::cout << "Enter todays date in the Format" << std::endl;
            std::cin >> donor_apps.date;
            
            out_file.open("data/accept.txt", std::ios::app);
            out_file<< donor_apps.name << std::endl << donor_apps.age << std::endl << donor_apps.weight << std::endl << donor_apps.health_ill_status 
            << std::endl << donor_apps.blood_group << std::endl << donor_apps.amount_of_blood << std::endl <<donor_apps.date;
            out_file.close();
            }
        else if (response == 2)
            {
                std::cout << "application is rejected" << std::endl;
            }
        else
            {
                std::cout << "Invalid Input" <<std::endl;
            }
        std::cout << "#####################################" << std::endl;
    }
    in_file.close();
    remove("data/new_donor.txt");
    return ;
}

void admin::blood_sample_list(){
    
    std::ifstream in_file;
    in_file.open("data/accept.txt",std::ios::in);
    std::cout << "=========================================ALL BLODD SAMPLE=====================================" << std::endl;
    std::cout<< "============================================================================================="<<std::endl;
    
    while (!in_file.eof() && in_file)
    {
        user donor_info;
        in_file >> donor_info.name >> donor_info.age >> donor_info.weight >> donor_info.health_ill_status 
        >> donor_info.blood_group >> donor_info.amount_of_blood>>donor_info.date;
        std::cout << "#####################################" << std::endl;
        std::cout << "\nBlood Group : "<<donor_info.blood_group;
        std::cout << "\nDonors name : " << donor_info.name ;
        std::cout << "\nQuantity (liter):" << donor_info.amount_of_blood ;
        std::cout << "\nDate when blood is received: " <<donor_info.date;
        std::cout << std::endl<< "#####################################" << std::endl;
        std::cout<< std::endl<<std::endl;
    }
    
    in_file.close();
    return ;

}

void admin::hospital_manage()
{
    std::cout << "==============================HOSPITAL MANAGEMENT===================================" <<std::endl;
    std::cout << "===================================================================================="<< std::endl;
    std::cout << "1. Hospitals List" << std::endl;
    std::cout << "2. Update the blood request" << std::endl;
    std::cout << "3. Delete" << std::endl<<std::endl;
    
    std::cout << "Select an option :" ;
    int response {};
    std::cin >> response;
    switch (response)
    {
    case 1:
        {
            std::cout << "=====================================HOSPITAL LIST=================================" << std::endl;
            std::cout << "==================================================================================="<< std::endl;
            std::ifstream in_file;
            in_file.open("data/hospitals.txt" , std::ios::in );
            hospital info;
            while (!in_file.eof() && in_file)
                {
                    in_file >> info.hospital_name >> info.license_id >> info.blood_group >> info.amount_of_blood ;
                    
                    info.display();

                }
                    std::cout<<std::endl<<std::endl;
                    in_file.close();
        }
        break;
    case 2:
        {
            std::cout << "=====================================UPDATE HOSPITAL REQUEST=================================" << std::endl;
            std::cout << "============================================================================================="<< std::endl;
            
            std::string id {};          
            std::cout<< "\nEnter the Hospital id you want to update : ";
            std::cin >> id;
            bool status {false};
            std::ifstream in_file;
            in_file.open("data/hospitals.txt", std::ios::in);
            std::ofstream out_file;
            out_file.open("data/temp.txt", std::ios::out);
            hospital info;
            while (!in_file.eof() && in_file)
            {
                
                in_file >> info.hospital_name >> info.license_id  >> info.blood_group >> info.amount_of_blood ;
                
               
                if (id == (info.license_id))
                {
                    std::cout<<"\nEnter the new blood request : "<<std::endl;
                    
                    std::cin>>info.license_id;
                    out_file<< info.hospital_name<< std::endl << info.license_id<<std::endl 
                    << info.blood_group << std::endl << info.amount_of_blood ;
                    std::cout << "\nYour Update is successful";
                    status=true;
                }
                else
                 out_file<< info.hospital_name<< std::endl << info.license_id<<std::endl 
                 << info.blood_group << std::endl << info.amount_of_blood ;
                    
            }
            in_file.close();
            out_file.close();
            remove("data/hospitals.txt");
            rename("data/temp.txt", "data/hospitals.txt");            
            if(!status)
            std::cout << "The ID does not exist:";
        }        
        break;
    case 3:
        {
            std::cout << "=====================================UPDATE HOSPITAL REQUEST=================================" << std::endl;
            std::cout << "**************************************************"<< std::endl;

            std::string id {};          
            std::cout<< "\nEnter the Hospital id you want to update : ";
            std::cin >> id;
            bool status {false};
            std::ifstream in_file;
            in_file.open("data/hospitals.txt", std::ios::in);
            std::ofstream out_file;
            out_file.open("data/temp.txt", std::ios::out);
             hospital info;
            while (!in_file.eof() && in_file)
            {
               
                in_file >> info.hospital_name >> info.license_id  >> info.blood_group  >> info.amount_of_blood ;
                    
                if (id == (info.license_id))
                {
                    status=true;
                }
                else
                out_file<< info.hospital_name<< std::endl << info.license_id<<std::endl << info.blood_group << std::endl << info.amount_of_blood  ;
                

            }
                in_file.close();
                out_file.close();
                remove("data/hospitals.txt");
                rename("data/temp.txt", "data/hospitals.txt");            
            if(!status)
            std::cout << "The ID does not exist:";

        }
        break;
    default:
        std::cout << "Invalid option selected";
        break; 
    }

}