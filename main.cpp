#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;
class StudentName{
private:

public:
    string name;
    StudentName(){}
    StudentName(string n){
        int counter=0;
        for(int i=0 ; i<sizeof(n) ; i++){
            if(n[i]==' '){
                counter++;
            }
            else if (counter >=2){
                name=n;
                cout<<n<<endl;
                break;
            }
        }
        if (counter==0);{
            name=n+" "+n+" "+n;
            cout<<name<<endl;
        }
        if (counter==1){
            string last;
            int pos =n.find_last_of(' ');
            for(int i= pos+1 ; i<sizeof(n) ; i++){
                if (n[i]==0)
                    break;
                last=last+n[i];
                name=n+" "+last;
                cout<<name ;
            }
        }
    }
    void print(){
    int counter3=0;
    string temp;
    string name2=name;

    for(int i=0; i<=name2.length(); i++)
    {
        if(name2[i]==' ')
        {
            counter3=counter3+1;
            temp= name2.substr(0,i);

            cout<< counter3 << '-' << temp<<endl;

            name2=  name2.erase(0,i+1);
            i=0;

        }

    }

    cout<< counter3+1 << '-' << name2<<endl;
       /*** int counter =1;
        cout<<"detailed parts of the name are : "<<endl;
        cout<<counter<<")";
        for(int i=0;i<sizeof(name);i++){
            cout<<name[i];
            if ((name[i]==' ')&&(name[i]==0)){
                counter++;
                cout<<endl<<counter<<"(";
            }
        }********/

    }
bool  Replace(int a, int b)
{
    vector <string> temp2;
    string temp3;

    int spacesCounter=0;

    for(int b=0; b<=name.length(); b++)
    {
        if(name[b]==' ')
            spacesCounter+=1;
    }
    cout<<"enter the position of which names to replace"<<endl;
    cin>>a >>b;
    if((a>spacesCounter+1)||(b>spacesCounter+1))
    {
        cout<<"this cant be completed"<<endl;
        return false;
    }
    else
    {
        for(int i=0; i<=name.length(); i++)
        {
            if(name[i]==' ')
            {
                temp3= name.substr(0,i);


                temp2.push_back(temp3);

                name=  name.erase(0,i+1);
                i=0;

            }

        }
        temp2.push_back(name);


        for(int j=0; j<=temp2.size()-1; j++)
        {

            swap(temp2[a-1],temp2[b-1]);



        }

        for(int j=0; j<=temp2.size()-1; j++)
        {

            cout <<temp2 [j]<<' ' ;
        }
    }

    cout<<endl;
}



};
int main()
{
    int x,y;
   string result;
    StudentName a1("samar");
    result=a1.name;
    a1.print();
    a1.Replace(x,y);
    StudentName a2("bassant nasser ");
    result=a2.name;
    a2.print();
    a2.Replace(x,y);
    StudentName a3("eman aymen mohamed");
    result=a3.name;
    a3.print();
    a3.Replace(x,y);
    StudentName a4("ali mohamed ahmed ");
    result=a4.name;
    a4.print();
    a4.Replace(x,y);
    StudentName a5("ahmed mohamed ali youssef ");
    result=a5.name;a5.print();
    a5.Replace(x,y);









    return 0;
}
