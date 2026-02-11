/* Question: Create a User with properties : id(private) , username(public)& password(private).

its id should be intialized in a parameteriesed constructor.

its should have a Getter and Setter for password 

 */

#include <iostream>
using namespace std;

class User{
    private:
        int id;
        int password;

    public:
        string username;
        User(int id){
            this->id = id; // left side object id and right side parameter id 
        }


        int getpassword(){
            return password;
        }

        void setpassword(int password){
            this->password = password;
        }
};

int main() {

    User user1 = (101);

    user1.username = "mrGusain";
    user1.setpassword(12345);

    cout<<"username :"<<user1.username <<endl;

    cout<<"password : "<<user1.getpassword()<<endl;
    
    return 0;
}