using namespace std;

class Patient
{
protected:
    string name;
    vector<Blood>table;
    
public:
    Patient(string);
    void addRecord(Blood);
    void print();
    void printReport();
};

#endif /* Patient_hpp */
