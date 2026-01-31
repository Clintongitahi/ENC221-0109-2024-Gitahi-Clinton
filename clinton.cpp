#include <iostream>
#include <string>
using namespace std;
class Roommate{
    private:
        string name;
        int age;
        string personality;
        string hobby;
    public:
        Roommate(string n, int a, string p, string h){
            name=n;
            age=a;
            personality=p;
            hobby=h;
        }
        void introduce(){
            cout<<"My roommate is "<<name<<".\n";
            cout<<"He is "<<age<<"years old.\n";
            cout<<"He is" <<personality<<"\n";
            cout<<"He loves" <<hobby<<"\n";
        }
};
int main(){
    Roommate r("Jeremy",22,"calm and friendly","cooking");
    r.introduce();
    return 0;
}
