#include <iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<time.h>

using namespace std;
int i=4;
class teacher
{
    char name[20],id[10];
    public:
        void infor()
        {
            cout<<"Enter the name of teacher";
            cin>>name;
            cout<<"Enter the id";
            cin>>id;
        }
        void displa()
        {
           char c[100];
            strcpy(c,"D:/PYTHON/c/pro/faculty/faculty.txt");
            ifstream file(c);
            string str;
            while (getline(file, str))
            {
            cout<<str<<endl;
            }
            file.close();
        }
        void add_fac()
        {  // int j=1;
            char c[100],n[20],r[20];
            strcpy(c,"D:/PYTHON/c/pro/faculty/faculty.txt");
            cout<<"Enter the name\n";
            cin>>r;
            cout<<"Enter the educational qualification ";
           // while(j)
           // {
                gets(n);
                gets(n);
               // cout<<"ENTER 1 TO ADD ANOTHER LINE & 0 TO STOP ";
                //cin>>j;

            ofstream fileo(c,ios::app);

            fileo<<"\n";
            fileo<<i<<": ";
            fileo<<r;
            fileo<<"\n";
            fileo<<"Educational Qualification :\n";
            fileo<<n<<endl;
            fileo.close();



        }


        friend class tt;

};



class tt
{
    public:  void time_table(int yr);
};

 void  tt::time_table(int yr)
{
        char c[100];
        if(yr==1)
            strcpy(c,"D:/PYTHON/c/pro/time_table/1setyear.txt");
        else if(yr==2)
            strcpy(c,"D:/PYTHON/c/pro/time_table/2ndyear.txt");
        else if(yr==3)
            strcpy(c,"D:/PYTHON/c/pro/time_table/3rdyear.txt");
        else if(yr==4)
            strcpy(c,"D:/PYTHON/c/pro/time_table/4thyear.txt");
        else {
                cout<<"invalid \n";
                return;
             }
        ifstream file(c);
        string str;
        while (getline(file, str))
        {
            cout<<str<<endl;
        }
}


class student : public teacher
{
    char name1[20],id1[10];
    public:
            void info()
            {
                cout<<"Enter the name of student";
                cin>>name1;
                cout<<"Enter the id";
                cin>>id1;
            }
            void display(int yr)
            {
                char c[100];
                if(yr==1)
                    strcpy(c,"D:/PYTHON/c/pro/1styear/1setyearstu.txt");
                else if(yr==2)
                    strcpy(c,"D:/PYTHON/c/pro/2ndyear/2nyearstu.txt");
                else if(yr==3)
                    strcpy(c,"D:/PYTHON/c/pro/3rdyear/3rdyearstu.txt");
                else if(yr==4)
                    strcpy(c,"D:/PYTHON/c/pro/4thyear/4thyearstu.txt");
                else {
                    cout<<"invalid \n";
                    return;
                     }

                ifstream file(c);
                string str;
                while (getline(file, str))
                {
                    cout<<str<<endl;
                }
                file.close();
            }
            void add_stu(int yr,int n1)
            {
                char c[100],n[20],r[20];
                if(yr==1)
                    strcpy(c,"D:/PYTHON/c/pro/1styear/1setyearstu.txt");
                else if(yr==2)
                    strcpy(c,"D:/PYTHON/c/pro/2ndyear/2nyearstu.txt");
                else if(yr==3)
                    strcpy(c,"D:/PYTHON/c/pro/3rdyear/3rdyearstu.txt");
                else if(yr==4)
                    strcpy(c,"D:/PYTHON/c/pro/4thyear/4thyearstu.txt");
                else {
                    cout<<"invalid \n";
                    return;
                     }
                for(int i=0;i<n1;i++)
                {
                    cout<<"ENTER THE STUDENT USN \n";
                    cin>>r;
                    cout<<"ENTER THE STUDENT NAME ";
                    cin>>n;
                    ofstream fileo(c,ios::app);
                    fileo<<r;
                    fileo<<"\t";
                    fileo<<n<<endl;
                    fileo.close();
                }

            }
            void search1(int y)
            {
                char usn[10],x[100];
                cout<<"ENTER THE STUDENT USN :";
                cin>>usn;
                //for(int k=0;k< 10;k++)
                //    m=toupper(usn[k]);
                if(y==1)
                    strcpy(x,"D:/PYTHON/c/pro/1styear/1setyearstu.txt");
                else if(y==2)
                    strcpy(x,"D:/PYTHON/c/pro/2ndyear/2nyearstu.txt");
                else if(y==3)
                    strcpy(x,"D:/PYTHON/c/pro/3rdyear/3rdyearstu.txt");
                else if(y==4)
                    strcpy(x,"D:/PYTHON/c/pro/4thyear/4thyearstu.txt");
                else {
                        cout<<"invalid \n";
                        return;
                     }

                ifstream file(x);
                string str;
                while (getline(file, str))
                {
                    if((str.find(usn,0))!=string::npos)
                    {
                        cout<<"\n\n\t\t\tSTUDENT FOUND \n";
                        cout<<"\n\n\t\t\t"<<str;
                        file.close();
                        return;

                    }

                }
                file.close();
                cout<<"\n\n\t\t\tSTUDENT NOT FOUND";
            }

             void marks(int yr)
            {
            char c[100],P[100];
                if(yr==1)
                    strcpy(c,"D:/PYTHON/c/pro/1styear/1setyearstu.txt");
                else if(yr==2)
                    strcpy(c,"D:/PYTHON/c/pro/2ndyear/2nyearstu.txt");
                else if(yr==3)
                    strcpy(c,"D:/PYTHON/c/pro/3rdyear/3rdyearstu.txt");
                else if(yr==4)
                    strcpy(c,"D:/PYTHON/c/pro/4thyear/4thyearstu.txt");
            else {
                cout<<"invalid \n";
                return;
                }

            if(yr==1)
                strcpy(P,"D:/PYTHON/c/pro/1styear/marks1.txt");
            else if(yr==2)
                strcpy(P,"D:/PYTHON/c/pro/2ndyear/marks2.txt");
            else if(yr==3)
                strcpy(P,"D:/PYTHON/c/pro/3rdyear/marks3.txt");
            else if(yr==4)
                strcpy(P,"D:/PYTHON/c/pro/4thyear/marks4.txt");
            else {
                cout<<"invalid \n";
                return;
                }
        ifstream file(c);
        string str,pt;
        //int j;
        char usn[20];
        int s1,s2,s3,s4,s5,s6;
        cout<<"ENTER THE USN OF THE STUDENT IN CAPITAL LETTERS :";
        cin>>usn;

            while(getline(file,str))
            {
                    if((str.find(usn,0))!=string::npos)
                    {
                        cout<<"\n\n\t\t\tSTUDENT FOUND \n";
                        cout<<"\n\n\t\t\t"<<str;
                        file.close();
                        cout<<"\n\nENTER THE MARKS IN 6 SUBJECTS";
                        cin>>s1>>s2>>s3>>s4>>s5>>s6;
                        ofstream f(P,ios::app);
                        f<<"\n"<<str;
                        f<<"\t"<<s1<<"\t"<<s2<<"\t"<<s3<<"\t"<<s4<<"\t"<<s5<<"\t"<<s6;
                        f.close();
                    }
               }


        file.close();
        }
        void disp_pass()
        {
            ifstream fin("D:/PYTHON/c/pro/cce_alumni/passout.txt");
            string str;
            while(getline(fin,str))
            {
                cout<<str<<endl;
            }
            fin.close();
        }

};

void passout()
    {
            char c;
            ofstream obj;
            string str;
            ifstream filop("D:/PYTHON/c/pro/4thyear/4thyearstu.txt");
            obj.open("D:/PYTHON/pro/cce alumni/passout.txt",ios::app);
            while(filop.get(c))
            {
                obj<<c;
            }
            obj.close();
            filop.close();
            ifstream file("D:/PYTHON/c/pro/3rdyear/3rdyearstu.txt");
            ofstream filee("D:/PYTHON/c/pro/4thyear/4thyearstu.txt");
            while(file.get(c))
            {
                filee.put(c);
            }
            file.close();
            filee.close();
            file.clear();
            ifstream fil("D:/PYTHON/c/pro/2ndyear/2nyearstu.txt");
            ofstream fileou("D:/PYTHON/c/pro/3rdyear/3rdyearstu.txt");
            while(fil.get(c))
            {
                fileou.put(c);
            }
            fil.close();
            fileou.close();
            fil.clear();
            ifstream iofile("D:/PYTHON/c/pro/1styear/1setyearstu.txt");
            ofstream oufile("D:/PYTHON/c/pro/2ndyear/2nyearstu.txt");
            while(iofile.get(c))
            {
                oufile.put(c);
            }
            iofile.close();
            oufile.close();
            ofstream fileee("D:/PYTHON/c/pro/1styear/1setyearstu.txt");
            fileee<<"\n";
            fileee.close();
    }


int main()
{
    int n1,r,b,yr;
    int p1;

    student s;
    //teacher t;
    tt v;

    char n[6]="4NMCM",z[6]="4nmcm";
    while(1)
    {

        label:
       cout<<"\n\n\n\n\n\t\t\t\t1:LOGIN\n\t\t\t\t2:FORGOT PASSWORD \n\t\t\t\t3:EXIT\n\n\n";
       cout<<"\t\t\t\tENTER THE CHOICE :";
       cin>>n1;
       switch(n1)
       {
         case 1:

                char st[10],p[10];
                system("cls");
                cout<<"\n\n\n\t\t\t\tLOGIN ID :";
                cin>>st;
                if((strcmp(st,n))==0||(strcmp(st,z)==0))
                {
                    cout<<"\t\t\t\tENTER THE PASSWORD :";
                    cin>>p;
                    ifstream file;
                    file.open("D:/PYTHON/c/pro/password/pass.txt");
                    string str,pt;
                    while(getline(file,str))
                    {
                        pt=str;

                    }
                    if(pt==p)
                    {
                        cout<<"CORRECT PASSWORD";
                        system("cls");
                        while(1)
                            {
                        system("cls");
                        cout<<"\n1:FACULTY \n2:STUDENT \n3:TIME TABLE\n4:CCE ALUMNI\n5:LOGOUT\nENTER YOUR CHOICE :";
                        cin>>b;
                        system("cls");
                        switch(b)
                        {
                            case 1:cout<<"\n1:DISPLAY ALL FACULTY \n2:ADD FACULTY\n\nENTER YOUR CHOICE : ";
                                    cin>>p1;
                                    switch(p1)
                                    {
                                        case 1:cout<<"CCE DEPT \n";
                                                s.displa();
                                                getch();
                                                break;
                                        case 2:cout<<"ENTER THE REQURIED INFORMATION\n";
                                                s.add_fac();
                                                i++;
                                                break;
                                    }
                                    break;
                            case 2:cout<<"\n1:DISPLAY ALL STUDENTS \n2:ADD STUDENTS\n3:SEARCH STUDENT WITH USN\n4:ADD PARTICULAR STUDENT MARKS IN 6 SUBJECTS\n5:NEW BATCH\n\nENTER YOUR CHOICE :";
                                    cin>>p1;
                                    system("cls");
                                    switch(p1)
                                    {
                                        case 1:cout<<"CCE DEPT STUDENTS\n";
                                                cout<<"ENTER THE YEAR OF STUDY";
                                                cin>>yr;
                                                s.display(yr);
                                                getch();
                                                break;
                                        case 2:cout<<"\t\t\tENTER THE REQURIED INFORMATION\n\n";
                                                cout<<"ENTER THE YEAR OF STUDY :";
                                                cin>>yr;
                                                cout<<"ENTER THE NUMBER OF STUDENTS TO BE ADDED :";
                                                cin>>n1;
                                                s.add_stu(yr,n1);
                                                break;
                                        case 3:cout<<"ENTER THE YEAR OF STUDY \n";
                                                cin>>yr;
                                                s.search1(yr);
                                                getch();
                                                break;
                                        case 4:cout<<"ENTER THE YEAR OF STUDY \n";
                                                cin>>yr;
                                                s.marks(yr);
                                                break;

                                        case 5: cout<<"\t\t\t\t\t    PROCESSING ";
                                                passout();
                                                cout<<"\nENTER THE NUMBER OF STUDENTS TO BE ADDED FOR FIRST YEAR \n";
                                                cin>>n1;
                                                s.add_stu(1,n1);
                                                break;
                                    }
                                    break;
                            case 3:cout<<"\nTIME TABLE \n";
                                   cout<<"ENTER THE YEAR OF STUDY";
                                   cin>>yr;
                                   v.time_table(yr);
                                   getch();
                                   break;
                            case 4:cout<<" \n\t\t\tCCE ALUMNI\n";
                                   s.disp_pass();
                                   getch();
                                    break;
                            case 5:system("cls");
                                   goto label;

                            default:cout<<"Invalid";
                        }

                            }
                    }

                    else
                    {
                        cout<<"\n\t\t\t\tINCORRECT PASSWORD \n\t\t\t\t   TRY AGAIN \n";
                        getch();
                        system("cls");
                    }

                }
                else
                    {
                        cout<<"INCORRECT LOGIN ID";
                        getch();
                        system("cls");
                    }

                    break;
        case 2:srand(time(0));

                    r=rand();
                    cout<<"ENTER THE GIVEN NUMMBER BELOW"<<endl<<r<<endl;
                    cin>>p1;
                    if(r==p1)
                    {
                        cout<<"ENTER THE NEW PASSWORD \n";
                        cin>>p;
                        ofstream fileo("D:/PYTHON/c/pro/password/pass.txt");
                        fileo<<p;
                        fileo.close();
                        system("cls");
                    }
                    else{
                        cout<<"INCORRECT NUMBER ENTERED";
                        getch();
                        system("cls");
                    }
                    break;

        case 3:cout<<"\n\n\t\t\t\t    THANK YOU \n\n";
                   // system("color 4e");
                    exit(0);
        }
    }
    return 0;
}

