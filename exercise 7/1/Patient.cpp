#include "Patient.hpp"
#include "Blood.hpp"


Patient::Patient(string name)
{
    //this pointer points to the object to which the member function is called
    this ->name=name;
    this ->table=vector<Blood>();
}

void Patient::addRecord(Blood record)
{
    //Add record at the end of table
    this ->table.push_back(record);
}

//print the complete report of patients
void Patient::print()
{

    cout << "−−−−−"<< "Complete Report of Patient: " << this ->name << "−−−−−" <<endl;
    
    for(int j=0; j< this->table.size(); j++)
    {
        this ->table[j].print();
    }
};

//print ths abnormal report of patients
void Patient::printReport()
{
    vector <Blood> Abnormal = vector<Blood>();
    int max = 140;
    double sumDias{};

    for(int i=0; i<this ->table.size();i++)
    {
        sumDias += table[i].getDias();
        
        if (table[i].getSys() > max)
        {
            Abnormal.clear();
            Abnormal.push_back(table[i]);
            max=table[i].getSys();
        }
            
        else if (table[i].getSys()==max)
        {
            Abnormal.push_back(table[i]);
        }
    }
    
    cout << "−−−−−"<< "Abnormal Report of Patient: " << this ->name << "−−−−−" <<endl;
    
    if (Abnormal.size()==0)
    {
        cout << "No measurement was too high!" << endl;
    }
            
    else
    {
        cout << "HIGHEST Abnormal systolic: " << endl;
            
        for(int i=0;i <Abnormal.size(); i++)
        {
            //cout << "\t";
            Abnormal[i].print();
        }
    }
    
    cout << "average diastolic pressure: " << sumDias/table.size() << endl;

    
};
