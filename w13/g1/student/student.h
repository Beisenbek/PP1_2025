using namespace std;

struct student{
    string name;
    string sname;
    double gpa;
    student(string name, string sname, double gpa){
        this->name = name;
        this->sname = sname;
        this->gpa = gpa;
    }
    void print_information(){
        cout << name << " " << sname << " " << gpa << endl;
    }
};

bool compare_by_name_asc(student s1, student s2){
    if(s1.name > s2.name) return false;
    return true;
}

bool compare_by_name_desc(student s1, student s2){
    if(s1.name < s2.name) return false;
    return true;
}

bool compare_by_gpa_desc(student s1, student s2){
    if(s1.gpa < s2.gpa) return false;
    return true;
}