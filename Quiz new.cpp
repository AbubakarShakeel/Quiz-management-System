#include<iostream>
#include<stdio.h>
#include<windows.h>//for clear screen
#include<conio.h>//for getch function
#include <chrono>//for stopwatch
using namespace std;
using namespace std::chrono;

	struct student{
		char name[20],roll[20];
		int count;
	};
	student st;
	
	
	
duration<double>quizDuration;//Global declaration for time
	
	
	bool pfeasy()//function for programming fundamentals easy mode 
	{
   st.count=0;
	char select;
	
	
	
	cout <<"> Quiz started! Answer the following questions:" << endl;
    
    // Starting  of stopwatch
    auto start = high_resolution_clock::now();
	auto current = start;	
	

	cout<<"\n\n\n> Difficulty : Easy"<<endl;
	cout<<"\n\n> Choose the correct options"<<endl<<endl;
//MCQS 01
cout << "1. Who invented C++?:"<< endl;
cout << "\na) Dennis Ritchie"<< endl;
cout << "b) Ken Thompson"<<endl;
cout << "c) Brian Kernighan" <<endl;
cout <<"d) Bjarne Stroustrup"<<endl;
cout <<"\n\nSelect option -> A | B | C | D : ";
//correct opt is A

//checking time
    current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 20) 
	{
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }



select=getch();
cout<<select<<endl;  
if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;
st.count=0;	
}

//MCQS 02
cout << "\n2. What is C++?:" << endl;
cout << "\na) C++ is an object-oriented programming language."<<endl;
cout << "b) C++ is a procedural programming language."<<endl;
cout << "c) C++ supports both procedural and object-oriented programming languages."<<endl;
cout << "d) C++ is a functional programming language."<<endl;
cout <<"\n\nSelect option -> A | B | C | D : ";
//correct opt is A



//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 20) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }





select=getch();
cout<<select<<endl; 
if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}
//MCQS 03
cout << "\n3. Which of the following is the correct syntax for including a user-defined header file in C++?:" << endl;
cout << "\na) #include [userdefined]"<<endl;
cout << "b) #include \"userdefined\""<<endl;
cout << "c) #include <userdefined.h>"<<endl;
cout << "d) #include <userdefined>"<<endl;
cout <<"\nSelect option -> A | B | C | D : ";


//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 20) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }




select=getch();
cout<<select<<endl; 
if(select=='c'||select=='C')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\nWrong Answer"<<endl;		
}
//MCQS 04
cout << "\n4. Which of the following is used for comments in C++?:"<<endl;
cout << "\na) /* comment */"<<endl;
cout << "b) // comment */"<<endl;
cout << "c) // comment"<<endl;
cout << "d) Both // comment or /* comment */"<<endl;
cout <<"\n\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 20) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }





select=getch();
cout<<select<<endl; 
if(select=='d'||select=='D')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}
//MCQS 05
cout << "\n5. Which file extension is used for user-defined header files in C++?:"<<endl;
cout << "\na) .hg"<<endl;
cout << "b) .cpp"<<endl;
cout << "c) .h"<<endl;
cout << "d) .hf"<<endl;
cout <<"\nSelect option -> A | B | C | D : ";


//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 20) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }




select=getch();
cout<<select<<endl; 
if(select=='c'||select=='C')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;		
}
cout<<"\n\n\tCorrect options are"<<endl;
cout<<"__________________________________"<<endl;
cout << "\n |1. A |2. A |3. C |4. D |5. C |"<<endl;
cout<<"__________________________________"<<endl;



  quizDuration = duration_cast<duration<double>>(current - start);
    return true;
  
    

}//ending pfeasy function 

//function for printing result 
void pfeasyresult()
{
float per=0;
		
cout<<"\n-> Student Name: "<<st.name<<endl;
cout<<"\n-> Student Roll no: "<<st.roll<<endl;
cout<<"\n-> "<<st.name<<" got "<<st.count<<" marks"<<" out of 5"<<endl;
per=((100*st.count)/5);
cout<<"\n-> Percantage: "<<per<<"%"<<endl;
if(per>50)
{
	cout<<"\n-> Status:Pass";
	cout<<"\n\n-> Congratulations"<<endl<<endl;
		cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
}
else{
	cout<<"\n-> Status:Fail";
	cout<<"\n\n-> Try again:("<<endl<<endl;
	cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
	
}

}



//PF Medium  function

    bool pfmedium()
    {
    	char select;
    	st.count=0;
    
	
	    // Starting  of stopwatch
    auto start = high_resolution_clock::now();
	auto current = start;
	
		
    	cout<<"\n\n\n> Difficulty : Medium"<<endl;
    	
//MCQS 01
    cout << "\n\n01) What is the output of the following code snippet?" << endl;
    cout << "\nint x = 10;" << endl;
    cout << "cout << x++ \n" << endl;
    cout << "\na) 10" << endl;
    cout << "b) 11" << endl;
    cout << "c) 9" << endl;
    cout << "d) Compilation error" << endl << endl;
	cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 15) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }


select=getch();
cout<<select<<endl; 
if(select=='b'||select=='B')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;		
}



    //MCQ 02
    cout << "\n\n02) What is the correct syntax to allocate memory for an integer variable in C++?" << endl;
    cout << "\na) int *ptr = new int();" << endl;
    cout << "b) int *ptr = malloc(sizeof(int));" << endl;
    cout << "c) int ptr = malloc(int);" << endl;
    cout << "d) int *ptr = alloc(int);" << endl << endl;
	cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 15) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }



select=getch();
cout<<select<<endl; 
if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;		
}

   //mcq3
    cout << "\n\n03) Which keyword is used to define a constant value in C++?" << endl;
    cout << "\na) constant" << endl;
    cout << "b) define" << endl;
    cout << "c) const" << endl;
    cout << "d) final" << endl << endl;
   cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 15) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }
select=getch();
cout<<select<<endl; 
if(select=='c'||select=='C')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;		
} 


	//MCQ 04
    cout << "\n\n04) What will be the output of the following code snippet?" <<endl;
    cout << "\nint arr[] = {1, 2, 3, 4, 5};" << endl;
    cout << "cout << *(arr + 3);" << endl;
    cout << "\na) 1" << endl;
    cout << "b) 2" << endl;
    cout << "c) 3" << endl;
    cout << "d) 4" << endl << endl;
	cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 15) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }

select=getch();
cout<<select<<endl; 
if(select=='d'||select=='D')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;		
}


//MCQ 05
    cout << "\n\n05) Which of the following is not a valid C++ data type?" << endl;
    cout << "\na) long long" << endl;
    cout << "b) double long" << endl;
    cout << "c) unsigned short" << endl;
    cout << "d) float double" << endl;
	cout <<"\nSelect option -> A | B | C | D : ";

	//checking time
    current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 15) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }
	


select=getch();
cout<<select<<endl; 
if(select=='d'||select=='D')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;		
}

cout<<"\n\n\tCorrect options are"<<endl;
cout<<"__________________________________"<<endl;
cout << "\n |1. B |2. A |3. C |4. D |5. D |"<<endl;
cout<<"__________________________________"<<endl;

  quizDuration = duration_cast<duration<double>>(current - start);
    return true;

}


//FUNCTION FOR PF MEDIUM RESULT 
void pfmediumresult()

{
float per=0;
		
cout<<"\n-> Student Name: "<<st.name<<endl;
cout<<"\n-> Student Roll no: "<<st.roll<<endl;
cout<<"\n-> "<<st.name<<" got "<<st.count<<" marks"<<" out of 5"<<endl;
per=((100*st.count)/5);
cout<<"\n-> Percantage: "<<per<<"%"<<endl;
if(per>60)//per should be 60 to pass the quiz 
{
	cout<<"\n-> Status:Pass";
	cout<<"\n\n-> Congratulations"<<endl<<endl;
		cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
}
else{
	cout<<"\n-> Status:Fail";
	cout<<"\n\n-> Try again:("<<endl<<endl;
	cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
	
}	
	
		
	
}




//Function for pf hard 

bool pfhard()
{
	
	char select;
	st.count=0;
	
	
	    // Starting  of stopwatch
    auto start = high_resolution_clock::now();
	auto current = start;
	
	cout<<"\n\n\n> Difficulty : Hard"<<endl;
	
    // MCQ 01
   
    cout << "01) Which of the following is the correct syntax to create a pointer in C++?\n";
    cout << "\na) int ptr;\n";
    cout << "b) int *ptr;\n";
    cout << "c) int ptr*;\n";
    cout << "d) int &ptr;\n";
    //Answer: b. int *ptr;\n\n";

 cout <<"\nSelect option -> A | B | C | D : ";
 
 
 //checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 10) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }
 
 select=getch();
 cout<<select<<endl; 
 if(select=='b'||select=='B')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;		
}


    // MCQ 02
    
    cout << "\n02)What will be the output of the following C++ code?\n";
    cout << "\n#include <iostream>\n";
    cout << "using namespace std;\n";
    cout << "\nint main() {\n";
    cout << "    int a = 5, b = 10;\n";
    cout << "    int *p1, *p2;\n";
    cout << "    p1 = &a;\n";
    cout << "    p2 = &b;\n";
    cout << "    *p1 = *p1 + *p2;\n";
    cout << "    cout << *p1 << \" \" << *p2;\n";
    cout << "    return 0;\n";
    cout << "}\n";
    cout << "\na) 15 10\n";
    cout << "b) 5 15\n";
    cout << "c) 10 5\n";
    cout << "d) 5 10\n";
    //"Answer: a. 15 10\n\n";

cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 10) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }


select=getch();
cout<<select<<endl; 
if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;		
}




    // MCQ 03
    cout << "\n03)What is the purpose of the virtual keyword in C++?\n";
    cout << "\na) To define a variable\n";
    cout << "b) To create a pointer\n";
    cout << "c) To allow a function to be overridden in a derived class\n";
    cout << "d) To declare a constant value\n";
    // "Answer: c. To allow a function to be overridden in a derived class\n\n";

cout <<"\nSelect option -> A | B | C | D : ";
select=getch();
cout<<select<<endl; 
if(select=='c'||select=='C')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;		
}




    // MCQ 04
    
    cout << "\n05)Which of the following statements is true about destructors in C++?\n";
    cout << "a) Destructors can be overloaded.\n";
    cout << "b) Destructors can be called explicitly.\n";
    cout << "c) Destructors can take arguments.\n";
    cout << "d) Destructors cannot be virtual.\n";
    //"Answer: b. Destructors can be called explicitly.\n\n";

cout <<"\nSelect option -> A | B | C | D : ";



//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 10) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }

select=getch();
cout<<select<<endl; 
if(select=='b'||select=='B')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;		
}



    // MCQ 05
    
    cout << "\n05)What is the correct way to allocate memory dynamically for an array of 10 integers in C++?\n";
    cout << "a) int arr[10];\n";
    cout << "b) int *arr = new int[10];\n";
    cout << "c) int *arr = malloc(10 * sizeof(int));\n";
    cout << "d) int *arr = alloc(10 * sizeof(int));\n";
    
	//Answer: b. int *arr = new int[10];\n\n";

cout <<"\nSelect option -> A | B | C | D : ";


//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 10) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }



select=getch();
cout<<select<<endl; 
if(select=='b'||select=='B')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;		
}
cout<<"\n\n\tCorrect options are"<<endl;
cout<<"__________________________________"<<endl;
cout << "\n |1. B |2. A |3. C |4. B |5. B |"<<endl;
cout<<"__________________________________"<<endl;
	
  quizDuration = duration_cast<duration<double>>(current - start);
    return true;	
}


void pfhardresult()
{
float per=0;
		
cout<<"\n-> Student Name: "<<st.name<<endl;
cout<<"\n-> Student Roll no: "<<st.roll<<endl;
cout<<"\n-> "<<st.name<<" got "<<st.count<<" marks"<<" out of 5"<<endl;
per=((100*st.count)/5);
cout<<"\n-> Percantage: "<<per<<"%"<<endl;
if(per>70)
{
	cout<<"\n-> Status:Pass";
	cout<<"\n\n-> Congratulations"<<endl<<endl;
		cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
}
else{
	cout<<"\n-> Status:Fail";
	cout<<"\n\n-> Try again:("<<endl<<endl;
	cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
	
}

}




//ICT funcion easy
	bool icteasy()
{
 st.count=0;
char select;

    // Starting  of stopwatch
    auto start = high_resolution_clock::now();
	auto current = start;
	
	
cout<<"\n\n\n> Difficulty : Easy"<<endl;
	cout<<"\n\n\n-> Choose the correct options"<<endl;
	
//MCQS 1
cout << "\n1. What is the primary function of an operating system?" << endl;
cout << "\na) To manage data storage" << endl;
cout << "b) To manage computer hardware" << endl;
cout << "c) To manage software applications" << endl;
cout << "d) To manage user interactions" << endl;
// Answer: b) To manage computer hardware

cout <<"\nSelect option -> A | B | C | D : ";


//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 20) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }




select=getch();
cout<<select<<endl; 
if(select=='b'||select=='B')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;		
}
else
{
cout<<"\n\nWrong Answer"<<endl;
st.count=0;	
}

//MCQS 02
cout << "\n2. Which of the following is an example of a cloud-based service?" << endl;
cout << "\na) Google Drive" << endl;
cout << "b) Microsoft Office" << endl;
cout << "c) Adobe Photoshop" << endl;
cout << "d) Firefox Browser" << endl;
// Answer: a) Google Drive
cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 20) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }



select=getch();
cout<<select<<endl; 
if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;		
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}

//MCQS 03
cout << "\n3. What is the term for the process of transferring data from a computer to a server or another device?" << endl;
cout << "\na) Downloading" << endl;
cout << "b) Uploading" << endl;
cout << "c) Downloading and uploading" << endl;
cout << "d) None of the above" << endl;
 // Answer: b) Uploading

cout <<"\nSelect option -> A | B | C | D : ";


//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 20) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }




select=getch();
cout<<select<<endl; 
if(select=='b'||select=='B')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;		
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}

//MCQS 04
cout << "\n4. What is the purpose of a backup in computer systems?" << endl;
cout << "\na) To restore data in case of loss or corruption" << endl;
cout << "b) To speed up data transfer" << endl;
cout << "c) To reduce data storage costs" << endl;
cout << "d) To improve data security" << endl;
 // Answer: a) To restore data in case of loss or corruption
cout <<"\nSelect option -> A | B | C | D : ";



//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 20) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }




select=getch();
cout<<select<<endl; 
if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}
//MCQS 05
cout << "\n5.Which of the following is a type of network topology?" << endl;
cout << "\na) Bus" << endl;
cout << "b) Star" << endl;
cout << "c) Ring" << endl;
cout << "d) All of the above" << endl;
 // Answer: d) All of the above
cout <<"\nSelect option -> A | B | C | D : ";



//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 20) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }


select=getch();
cout<<select<<endl; 

if(select=='d'||select=='D')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;		
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}	
cout<<"\n\n\tCorrect options are"<<endl;
cout<<"__________________________________"<<endl;
cout << "\n |1. B |2. A |3. B |4. A |5. D |"<<endl;
cout<<"__________________________________"<<endl;	
	
	
	  quizDuration = duration_cast<duration<double>>(current - start);
    return true;
		
	}
	
	
	//function for printing result easy
	void icteasyresult()
	{
		float per=0;
cout<<"\n-> Student Name: "<<st.name<<endl;
cout<<"\n-> Student Roll no: "<<st.roll<<endl;
cout<<"\n-> "<<st.name<<" got "<<st.count<<" marks"<<" out of 5"<<endl;
per=((100*st.count)/5);
cout<<"\n-> Percantage: "<<per<<"%"<<endl;
if(per>50)
{
	cout<<"\n-> Status:Pass";
	cout<<"\n\n\t\t\tCongratulations"<<endl<<endl;
	cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
}
else{
	cout<<"\n-> Status:Fail";
	cout<<"\n\n-> Try again:("<<endl<<endl;
	cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
}

	}
	
	
	
	
bool ictmedium()
{
char select;
st.count=0;

    // Starting  of stopwatch
    auto start = high_resolution_clock::now();
	auto current = start;

cout<<"\n\n\n> Difficulty : Medium"<<endl;

    // MCQ 01
    cout << "MCQ 01:\n";
    cout << "Which of the following is a common protocol used for sending email?\n";
    cout << "\na. FTP\n";
    cout << "b. HTTP\n";
    cout << "c. SMTP\n";
    cout << "d. SNMP\n";
    // Answer: c. SMTP
    
    
cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 15) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }


select=getch();
cout<<select<<endl; 

if(select=='c'||select=='C')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;		
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}	  
    


    // MCQ 02
    cout << "MCQ 02:\n";
    cout << "\nWhat does 'HTTP' stand for?\n";
    cout << "a. Hyper Text Transfer Protocol\n";
    cout << "b. High Text Transfer Protocol\n";
    cout << "c. Hyperlink Transfer Protocol\n";
    cout << "d. Hyper Transfer Text Protocol\n";
    // Answer: a. Hyper Text Transfer Protocol
cout <<"\nSelect option -> A | B | C | D : ";


//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 15) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }

select=getch();
cout<<select<<endl; 

if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;		
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}	



    // MCQ 03
    cout << "MCQ 03:\n";
    cout << "Which of the following storage devices has the largest capacity?\n";
    cout << "\na. DVD\n";
    cout << "b. CD-ROM\n";
    cout << "c. Blu-Ray Disc\n";
    cout << "d. Floppy Disk\n";
    // Answer: c. Blu-Ray Disc
   cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 15) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }


select=getch();
cout<<select<<endl; 

if(select=='c'||select=='C')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;		
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}	




    // MCQ 04
    cout << "MCQ 04:\n";
    cout << "What is the primary purpose of an operating system?\n";
    cout << "\na. To manage computer hardware and software resources\n";
    cout << "b. To allow users to browse the Internet\n";
    cout << "c. To run productivity applications like word processors and spreadsheets\n";
    cout << "d. To protect the computer from malware\n";
    // Answer: a. To manage computer hardware and software resources
   cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 15) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }



select=getch();
cout<<select<<endl; 

if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;		
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}	


    // MCQ 05
    cout << "MCQ 05:\n";
    cout << "Which of the following is a programming language?\n";
    cout << "a. HTML\n";
    cout << "b. CSS\n";
    cout << "c. Python\n";
    cout << "d. SQL\n";
    // Answer: c. Python
    
cout <<"\nSelect option -> A | B | C | D : ";


//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 15) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }



select=getch();
cout<<select<<endl; 

if(select=='c'||select=='C')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;		
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}	

cout<<"\n\n\tCorrect options are"<<endl;
cout<<"__________________________________"<<endl;
cout << "\n |1. C |2. A |3. C |4. A |5. C |"<<endl;
cout<<"__________________________________"<<endl;
  
  
    quizDuration = duration_cast<duration<double>>(current - start);
    return true;
  
    
}//ending ictmediumfunction




//printing ictresult medium
void ictmediumresult()
{
		float per=0;
cout<<"\n-> Student Name: "<<st.name<<endl;
cout<<"\n-> Student Roll no: "<<st.roll<<endl;
cout<<"\n-> "<<st.name<<" got "<<st.count<<" marks"<<" out of 5"<<endl;
per=((100*st.count)/5);
cout<<"\n-> Percantage: "<<per<<"%"<<endl;
if(per>60)
{
	cout<<"\n-> Status:Pass";
	cout<<"\n\n\t\t\tCongratulations"<<endl<<endl;
	cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
}
else
{
	cout<<"\n-> Status:Fail";
	cout<<"\n\n-> Try again:("<<endl<<endl;
	cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
}

}


bool icthard()
{
	char select;
	st.count=0;
	
	    // Starting  of stopwatch
    auto start = high_resolution_clock::now();
	auto current = start;
	
	cout<<"\n\n\n> Difficulty : Hard"<<endl;
    // MCQ 01
    cout << "\n01) Which of the following algorithms is commonly used for public-key cryptography?\n";
    cout << "\na. AES\n";
    cout << "b. RSA\n";
    cout << "c. SHA-256\n";
    cout << "d. MD5\n";
    // Answer: b. RSA
    cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 10) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }



select=getch();
cout<<select<<endl; 

if(select=='b'||select=='B')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;		
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}	
    
    
    // MCQ 02
    cout << "\n02) In the OSI model, which layer is responsible for end-to-end communication and error recovery?\n";
    cout << "\na. Transport layer\n";
    cout << "b. Network layer\n";
    cout << "c. Data Link layer\n";
    cout << "d. Application layer\n";
    // Answer: a. Transport layer
    
   
    cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 10) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }


select=getch();
cout<<select<<endl; 

if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;		
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}	
    
    
    

    // MCQ 03
    
    cout << "\n03) Which type of database management system (DBMS) is designed to handle large volumes of unstructured data?\n";
    cout << "\na. Relational DBMS\n";
    cout << "b. Hierarchical DBMS\n";
    cout << "c. NoSQL DBMS\n";
    cout << "d. Network DBMS\n";
    // Answer: c. NoSQL DBMS
    
cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 10) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }

select=getch();
cout<<select<<endl; 

if(select=='c'||select=='C')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;		
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}	    
    
    


    // MCQ 04
    
    cout << "\n04) Which of the following is a benefit of using a Content Delivery Network (CDN)?\n";
    cout << "a. Reduced data redundancy\n";
    cout << "b. Increased latency\n";
    cout << "c. Improved website load times\n";
    cout << "d. Decreased network bandwidth\n";
    // Answer: c. Improved website load times
   
   cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 10) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }

select=getch();
cout<<select<<endl; 

if(select=='c'||select=='C')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;		
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}	
   

    // MCQ 05
    cout << "\n05)In cloud computing, what does 'SaaS' stand for?\n";
    cout << "a. Software as a Service\n";
    cout << "b. Storage as a Service\n";
    cout << "c. Security as a Service\n";
    cout << "d. System as a Service\n";
    // Answer: a. Software as a Service
    
cout <<"\nSelect option -> A | B | C | D : ";


//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 10) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }


select=getch();
cout<<select<<endl; 

if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;		
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}	
 
 
 
 cout<<"\n\n\tCorrect options are"<<endl;
cout<<"__________________________________"<<endl;
cout << "\n |1. B |2. A |3. C |4. C |5. A |"<<endl;
cout<<"__________________________________"<<endl;
  

   quizDuration = duration_cast<duration<double>>(current - start);
    return true; 
    
}

	
void icthardresult()
{
	float per=0;
cout<<"\n-> Student Name: "<<st.name<<endl;
cout<<"\n-> Student Roll no: "<<st.roll<<endl;
cout<<"\n-> "<<st.name<<" got "<<st.count<<" marks"<<" out of 5"<<endl;
per=((100*st.count)/5);
cout<<"\n-> Percantage: "<<per<<"%"<<endl;
if(per>70)
{
	cout<<"\n-> Status:Pass";
	cout<<"\n\n\t\t\tCongratulations"<<endl<<endl;
	cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
}
else{
	cout<<"\n-> Status:Fail";
	cout<<"\n\n-> Try again:("<<endl<<endl;
	cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
}
	
}		
	
	
	






	
	
	
	
	bool apeasy()
	{
		
		
		cout<<"\n\n\n> Difficulty : Easy"<<endl;
		
		
st.count=0;
char select;		
    // Starting  of stopwatch
    auto start = high_resolution_clock::now();
	auto current = start;	
	
	
	
	cout<<"\n\n\n> Choose the correct options"<<endl<<endl;
//MCQ 01
    cout << "1. What is the primary function of a photodiode?:" << endl;
    cout << "\na) To produce light from electrical energy" << endl;
    cout << "b) To convert light into electrical energy" << endl;
    cout << "c) To amplify light signals" << endl;
    cout << "d) To filter out light signals" << endl;
    //"Answer: b) To convert light into electrical energy" 
    cout <<"\nSelect option -> A | B | C | D : ";
	
	//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 20) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }
	
	
	select=getch();
	cout<<select<<endl; 

if(select=='b'||select=='B')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
cout<<"\n\n > your marks are:"<<st.count<<endl;
}
else
{
cout<<"\nWrong Answer"<<endl;	
}	
//MCQ 02
    cout << "\n: What is the term for the force that opposes motion between two surfaces that are in contact?" << endl;
    cout << "\na) Frictional force" << endl;
    cout << "b) Magnetic force" << endl;
    cout << "c) Electric force" << endl;
    cout << "d) Tension force" << endl;
    //"Answer: a) Frictional force" 
    cout <<"\nSelect option -> A | B | C | D : ";


//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 20) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }

	select=getch();
	cout<<select<<endl; 

if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;	
}	   
//MCQ 03
    cout << "\nMCQ 3: What is the unit of measurement for luminous intensity?" << endl;
    cout << "\na) Candelas (cd)" << endl;
    cout << "b) Lumens (lm)" << endl;
    cout << "c) Watts (W)" << endl;
    cout << "d) Volts (V)" << endl;
    // "Answer: a) Candelas (cd)" 
    cout <<"\nSelect option -> A | B | C | D : ";
    
	
	//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 20) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }
	
	
	select=getch();
    cout<<select<<endl; 

if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;
}	
    
    
//MCQ 04
    cout << "\n4: What is the principle behind a solar cell?" << endl;
    cout << "\na) Thermoelectric effect" << endl;
    cout << "b) Photovoltaic effect" << endl;
    cout << "c) Electromagnetic induction" << endl;
    cout << "d) Hall effect" << endl;
    //"Answer: b) Photovoltaic effect" 
    cout <<"\nSelect option -> A | B | C | D : ";
    
	//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 20) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }
	
	
	
	
	
	select=getch();
    cout<<select<<endl; 

if(select=='b'||select=='B')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;	
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;
}	
    
//MCQ 05
    cout << "\n5: What is the term for the frequency of oscillations in an electric circuit?" << endl;
    cout << "\na) Amplitude" << endl;
    cout << "b) Frequency" << endl;
    cout << "c) Period" << endl;
    cout << "d) Phase shift" << endl;
    //Answer: b) Frequency
cout <<"\nSelect option -> A | B | C | D : ";



//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 20) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }




select=getch();
cout<<select<<endl; 

if(select=='b'||select=='B')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;
}
cout<<"\n\n\tCorrect options are"<<endl;
cout<<"__________________________________"<<endl;
cout << "\n |1. B |2. A |3. B |4. B |5. B |"<<endl;
cout<<"__________________________________"<<endl;
	




  quizDuration = duration_cast<duration<double>>(current - start);
    return true; 
}


//function for printing result 
	void apeasyresult()
	{
	float per=0;
cout<<"\n-> Student Name: "<<st.name<<endl;
cout<<"\n-> Student Roll no: "<<st.roll<<endl;
cout<<"\n-> "<<st.name<<" got "<<st.count<<" marks"<<" out of 5"<<endl;
per=((100*st.count)/5);
cout<<"\n-> Percantage: "<<per<<"%"<<endl;
if(per>50)
{
	cout<<"\n-> Status:Pass";
	cout<<"\n\n-> Congratulations"<<endl<<endl;
cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
}
else
{
	cout<<"\n-> Status:Fail";
	cout<<"\n\n-> Try again:("<<endl<<endl;
	cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
}		
	}
	
	
	
//function for applied physics medium		
	bool apmedium()
	
	{
		
char select;
st.count=0;

    // Starting  of stopwatch
    auto start = high_resolution_clock::now();
	auto current = start;

cout<<"\n\n\n> Difficulty : Easy"<<endl;


cout<<"\n\n\n> Choose the correct options"<<endl<<endl;
    // MCQ 01
    
    cout << "\n01) What is the unit of the magnetic field strength?\n";
    cout << "\na. Tesla\n";
    cout << "b. Gauss\n";
    cout << "c. Weber\n";
    cout << "d. Henry\n";
    // Answer: a. Tesla
    
cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 15) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }




select=getch();
cout<<select<<endl; 

if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;
}



    // MCQ 02
    
    cout << "\n02) Which law states that the induced electromotive force in any closed circuit is equal to the rate of change of the magnetic flux through the circuit?\n";
    cout << "\na. Faraday's Law\n";
    cout << "b. Lenz's Law\n";
    cout << "c. Ampere's Law\n";
    cout << "d. Gauss's Law\n";
    // Answer: a. Faraday's Law
    
cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 15) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }



select=getch();
cout<<select<<endl; 

if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;    
}
    
    
    

    // MCQ 03
    
    cout << "\n03) Which of the following particles is considered a boson?\n";
    cout << "\na. Electron\n";
    cout << "b. Proton\n";
    cout << "c. Photon\n";
    cout << "d. Neutron\n";
    // Answer: c. Photon
    
cout <<"\nSelect option -> A | B | C | D : ";


//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 15) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }



select=getch();
cout<<select<<endl; 

if(select=='c'||select=='C')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;
}




    // MCQ 04
   
    cout << "\n04) What phenomenon occurs when the speed of an object exceeds the speed of sound in the surrounding medium?\n";
    cout << "\na. Doppler Effect\n";
    cout << "b. Sonic Boom\n";
    cout << "c. Shock Wave\n";
    cout << "d. Mach Wave\n";
    // Answer: b. Sonic Boom
    

cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 15) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }




select=getch();
cout<<select<<endl; 

if(select=='b'||select=='B')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;
}



    // MCQ 05
    
    cout << "\n05) In an RLC circuit, what does 'R' stand for?\n";
    cout << "\na. Resistance\n";
    cout << "b. Reactance\n";
    cout << "c. Resonance\n";
    cout << "d. Capacitance\n";
    // Answer: a. Resistance
    
cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 15) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }



select=getch();
cout<<select<<endl; 

if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;
}
cout<<"\n\n\tCorrect options are"<<endl;
cout<<"__________________________________"<<endl;
cout << "\n |1. A |2. A |3. C |4. B |5. A |"<<endl;
cout<<"__________________________________"<<endl;

  quizDuration = duration_cast<duration<double>>(current - start);
    return true; 
}

void apmediumresult()
	{
float per=0;
cout<<"\n-> Student Name: "<<st.name<<endl;
cout<<"\n-> Student Roll no: "<<st.roll<<endl;
cout<<"\n-> "<<st.name<<" got "<<st.count<<" marks"<<" out of 5"<<endl;
per=((100*st.count)/5);
cout<<"\n-> Percantage: "<<per<<"%"<<endl;
if(per>60)
{
	cout<<"\n-> Status:Pass";
	cout<<"\n\n-> Congratulations"<<endl<<endl;
cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
}
else
{
	cout<<"\n-> Status:Fail";
	cout<<"\n\n-> Try again:("<<endl<<endl;
	cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
}
		
}	


bool aphard()
{
	
char select;
st.count=0;


    // Starting  of stopwatch
    auto start = high_resolution_clock::now();
	auto current = start;

cout<<"\n\n\n> Difficulty : Easy"<<endl;



cout<<"\n\n\n> Choose the correct options"<<endl<<endl;
    // MCQ 01
    cout << "\n01) What is the principle behind the working of a hydraulic lift?\n";
    cout << "\na. Pascal's Law\n";
    cout << "b. Bernoulli's Principle\n";
    cout << "c. Archimedes' Principle\n";
    cout << "d. Newton's Third Law\n";
    // Answer: a. Pascal's Law


cout <<"\nSelect option -> A | B | C | D : ";


//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 10) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }



select=getch();
cout<<select<<endl; 

if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;
}





    // MCQ 02
   
    cout << "\n02) Which type of wave is light?\n";
    cout << "\na. Longitudinal wave\n";
    cout << "b. Transverse wave\n";
    cout << "c. Mechanical wave\n";
    cout << "d. Surface wave\n";
    // Answer: b. Transverse wave
    

cout <<"\nSelect option -> A | B | C | D : ";


//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 10) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }



select=getch();
cout<<select<<endl; 

if(select=='b'||select=='B')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;
}






    // MCQ 03
    
    cout << "\n03) Which quantity remains constant in an elastic collision?\n";
    cout << "\na. Kinetic energy\n";
    cout << "b. Momentum\n";
    cout << "c. Both kinetic energy and momentum\n";
    cout << "d. Velocity\n";
    // Answer: c. Both kinetic energy and momentum
    


cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 10) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }

select=getch();
cout<<select<<endl; 

if(select=='c'||select=='C')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;
}


    // MCQ 04
    
    cout << "\n04) In which medium does sound travel the fastest?\n";
    cout << "\na. Air\n";
    cout << "b. Water\n";
    cout << "c. Steel\n";
    cout << "d. Vacuum\n";
    // Answer: c. Steel
    
    
cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 10) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }


select=getch();
cout<<select<<endl; 

if(select=='c'||select=='C')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;    
}

    // MCQ 05
    
    cout << "\n05) What is the SI unit of electric charge?\n";
    cout << "\na. Coulomb\n";
    cout << "b. Volt\n";
    cout << "c. Ampere\n";
    cout << "d. Ohm\n";
    // Answer: a. Coulomb
    
    
 cout <<"\nSelect option -> A | B | C | D : ";

//checking time
current = high_resolution_clock::now();
    quizDuration = duration_cast<duration<double>>(current - start);
    if (quizDuration.count() > 10) {
        cout << "\n\n\n\n> Time's up! You took too long to answer." << endl;
        return false;
    }


select=getch();
cout<<select<<endl; 

if(select=='a'||select=='A')
{
cout<<"\n\n > Your answer is correct"<<endl;
st.count++;
}
else
{
cout<<"\n\n > Wrong Answer"<<endl;   
}

cout<<"\n\n\tCorrect options are"<<endl;
cout<<"__________________________________"<<endl;
cout << "\n |1. A |2. B |3. C |4. C |5. A |"<<endl;
cout<<"__________________________________"<<endl;
 
 
 
   quizDuration = duration_cast<duration<double>>(current - start);
    return true;    
}


	
void aphardresult()
{

float per=0;
cout<<"\n-> Student Name: "<<st.name<<endl;
cout<<"\n-> Student Roll no: "<<st.roll<<endl;
cout<<"\n-> "<<st.name<<" got "<<st.count<<" marks"<<" out of 5"<<endl;
per=((100*st.count)/5);
cout<<"\n-> Percantage: "<<per<<"%"<<endl;
if(per>70)
{
	cout<<"\n-> Status:Pass";
	cout<<"\n\n-> Congratulations"<<endl<<endl;
cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
}
else
{
	cout<<"\n-> Status:Fail";
	cout<<"\n\n-> Try again:("<<endl<<endl;
	cout<<"_________________________________________________________________________________________________________________________"<<endl<<endl;
}				
	
	
}
	
	
	
//starting of program
	
	int main()
{
	char select;
	char press;
	do{ 
	
//INTERFACE
cout <<"  \n\n\t\t\t\t\t\t==================" << endl;
cout <<"  \t\t\t\t\t\t|| QUIZ SESSION ||" << endl;
cout <<"  \t\t\t\t\t\t==================" << endl;

//ENTER NAME AND ROLL
cout << "\n\n\n > Enter your name : ";
gets(st.name);
cout << "\n > Enter your Roll no : ";
gets(st.roll);
system("CLS");//CLEARING SCREEN
		
	
//INSTRUCTIONS		
cout << "\n\t\t\t\t\t\t>>-----------------------<<" << endl;
cout << "\t\t\t\t\t\t>>     Instructions      <<" << endl;
cout << "\t\t\t\t\t\t>>-----------------------<<" << endl;
//1
cout << "\n\n > Each question is worth 1 mark." <<endl;
//2
cout << "\n > Choose the correct option from A, B, C, or D." <<endl;
//3
cout << "\n > You will see the correct answer after each question." <<endl;
//4
cout << "\n > Your final score will be displayed at the end." <<endl;
//5
cout<<"\n > In Easy mode , minimum Percantage should be 50% to Pass the Quiz.  "<<endl;
//6
cout<<"\n > In Medium mode , minimum Percantage should be 60% to Pass the Quiz.  "<<endl;		
//7
cout<<"\n > In Hard mode , minimum Percantage should be 70% to Pass the Quiz.  "<<endl;
//08
cout<<"\n > In Easy mode , minimum Time for each question is only 20 seconds."<<endl;		
//09
cout<<"\n > In Medium mode , minimum Time for each question is only 15 seconds."<<endl;
//10
cout<<"\n > In Hard mode , minimum Time for each question is only 10 seconds."<<endl;
//11
cout<<"\n > If the time limit exceed quiz will be terminated."<<endl;
		
		//STORING ALPHABET TO CONTINUE 	
		cout<<"\n\n > Press Y key to continue others keys to terminate: ";
		
		select=getch();
		cout<<select<<endl;
		system("CLS");//CLEARING SCREEN
		if(select=='y'||select=='Y')
		{
		
		
		//INTERFACE
    cout <<"\n\n\t\t\t\t\t\t  ==================" << endl;
    cout <<"\t\t\t\t\t\t  || QUIZ SESSION ||" << endl;
    cout <<"\t\t\t\t\t\t  ==================" << endl;	
		
		
		//SELECTION FOR QUIZ	
		cout<<"\n\n\n\n\n\n> Select which subject quiz you would want to perform "<<endl;

		//CHOICE:
		
		//01
		cout<<"\n1) Programming Fundamentals"<<endl;
		
		//02
		cout<<"\n2) ICT"<<endl;
		
		//03
		cout<<"\n3) Applied Physics"<<endl;
		
		cout <<"\nSelect option -> 1 | 2 | 3 |: ";
		
		//STORING CHOICE
		select=getch();
		cout<<select<<endl;
		system("CLS");
		
		//USING SWITCH FOR HANDLE THE CHOICE
		
		
		switch(select)//PASSING SELECT
		
		{
			
	//CASE 01 FOR PF		
	case '1':

	//TTILE PRINTING	
    cout << "\n\n\t\t\t\t\t\t>>----------------------------<<" << endl;
    cout << "\t\t\t\t\t\t>>  Programming Fundamentals  <<" << endl;
    cout << "\t\t\t\t\t\t>>----------------------------<<" << endl;	

//selection of Easy - Medium - Hard 

cout<<"\n\n > Select your Difficulty Level:";
cout<<"\n\n\n 1) Easy \t\t 2) Medium \t\t 3) Hard"<<endl;
    
    
    //STORING CHOICE
    cout<<"\n\n\n > Select 1 for Easy 2 for Medium 3 for Hard : ";
    select=getch();
    cout<<select<<endl;
    system("CLS");
    


//HANDELING CHOICE
 if(select=='1')
{
	
	cout << "\n\n\t\t\t\t\t\t>>----------------------------<<" << endl;
    cout << "\t\t\t\t\t\t>>  Programming Fundamentals  <<" << endl;
    cout << "\t\t\t\t\t\t>>----------------------------<<\n\n\n" << endl;	
	
	//Pf easy function calling
	pfeasy();
	
	
	
//STORING CHRACTER G
cout<<"\n\n\nPress 'G' to generate Quiz Report:";
select=getch();
cout<<select<<endl;
system("CLS");

if(select=='g'||select=='G')
{
	//RESULT INTERFACE
	cout<<"\n\n\n_________________________________________________________________________________________________________________________"<<endl<<endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
	cout << "\t\t\t\t\t\t>>  Quiz Result  <<" << endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;


//FUNCTION CALLING 	
	pfeasyresult();	
	
} //ending easy mode of pf 

}

else if(select=='2')
{
	
	 cout << "\n\n\t\t\t\t\t\t>>----------------------------<<" << endl;
    cout << "\t\t\t\t\t\t>>  Programming Fundamentals  <<" << endl;
    cout << "\t\t\t\t\t\t>>----------------------------<<\n\n\n" << endl;
	
	//PF MEDIUM FUNCTION CALLING
	pfmedium();

	//STORING CHRACTER G
cout<<"\n\n\nPress 'G' to generate Quiz Report:";
select=getch();
cout<<select<<endl;
system("CLS");

if(select=='g'||select=='G')
{
	//RESULT INTERFACE
	cout<<"\n\n\n_________________________________________________________________________________________________________________________"<<endl<<endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
	cout << "\t\t\t\t\t\t>>  Quiz Result  <<" << endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
    
    
    //PF MEDIUM RESULT FUNCTION CALLING
    pfmediumresult();
	
	
}
}
else if(select=='3')
{
	
	
	cout << "\n\n\t\t\t\t\t\t>>----------------------------<<" << endl;
    cout << "\t\t\t\t\t\t>>  Programming Fundamentals  <<" << endl;
    cout << "\t\t\t\t\t\t>>----------------------------<<\n\n\n" << endl;
	
	
	
	//PF HARD FUNCTION CALLING
	pfhard();
	
	
//STORING CHRACTER G
cout<<"\n\n\nPress 'G' to generate Quiz Report:";
select=getch();
cout<<select<<endl;
system("CLS");
if(select=='g'||select=='G')
{	
	
	//RESULT INTERFACE
	cout<<"\n\n\n_________________________________________________________________________________________________________________________"<<endl<<endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
	cout << "\t\t\t\t\t\t>>  Quiz Result  <<" << endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
	
	//PF HARD RESULT FUNCTION CALLING
	pfhardresult();
}

}
else
{
	
	cout<<"Wrong input";
	
}    
  
break;//ENDING FIRST CASE	 
			
			
			
	//CASE 02 FOR ICT		
			
	case '2':
				
	//INTERFACE OF ICT			
	cout << "\n\t\t\t\t\t>>---------------------------------------------<<" << endl;
    cout << "\t\t\t\t\t>>  Information and Communications Technology  <<" << endl;
    cout << "\t\t\t\t\t>>---------------------------------------------<<" << endl;
	
	
	//selection of Easy - Medium - Hard 

cout<<"\n\n > Select your Difficulty Level:"<<endl;
cout<<"\n\n\n 1) Easy \t\t 2) Medium \t\t 3) Hard"<<endl;
    
    
    //STORING CHOICE
    cout<<"\n\n\n > Select 1 for Easy 2 for Medium 3 for Hard : ";
    select=getch();
    cout<<select<<endl;
    system("CLS");
	
 if(select=='1')
 
 {
 	
 	cout << "\n\t\t\t\t\t>>---------------------------------------------<<" << endl;
    cout << "\t\t\t\t\t>>  Information and Communications Technology  <<" << endl;
    cout << "\t\t\t\t\t>>---------------------------------------------<<" << endl;
 	
 	//function calling ict easy
 	icteasy();
 	
 	//STORING CHRACTER G
cout<<"\n\n\nPress 'G' to generate Quiz Report:";
select=getch();
cout<<select<<endl;
system("CLS");

if(select=='g'||select=='G')
{	
	
	//RESULT INTERFACE
	cout<<"\n\n\n_________________________________________________________________________________________________________________________"<<endl<<endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
	cout << "\t\t\t\t\t\t>>  Quiz Result  <<" << endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
	
	//QUIZ RESULT FUNCTION CALLING
	icteasyresult();
}
 	
 
 	
 	
}	
	  if(select=='2')
	  {
	  	
	  	
	  	
 	cout << "\n\t\t\t\t\t>>---------------------------------------------<<" << endl;
    cout << "\t\t\t\t\t>>  Information and Communications Technology  <<" << endl;
    cout << "\t\t\t\t\t>>---------------------------------------------<<" << endl;
 	
 	ictmedium();
 	
 	//STORING CHRACTER G
cout<<"\n\n\nPress 'G' to generate Quiz Report:";
select=getch();
cout<<select<<endl;
system("CLS");

if(select=='g'||select=='G')
{	
	
	//RESULT INTERFACE
	cout<<"\n\n\n_________________________________________________________________________________________________________________________"<<endl<<endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
	cout << "\t\t\t\t\t\t>>  Quiz Result  <<" << endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
	
	//QUIZ RESULT FUNCTION CALLING
	ictmediumresult(); 	
	  	
	  	
	  	
	  }
}
	   if(select=='3')
	   {
	    	
 	cout << "\n\t\t\t\t\t>>---------------------------------------------<<" << endl;
    cout << "\t\t\t\t\t>>  Information and Communications Technology  <<" << endl;
    cout << "\t\t\t\t\t>>---------------------------------------------<<" << endl;
 	
	icthard();
 	//STORING CHRACTER G
cout<<"\n\n\nPress 'G' to generate Quiz Report:";
select=getch();
cout<<select<<endl;
system("CLS");

if(select=='g'||select=='G')
{	
	
	//RESULT INTERFACE
	cout<<"\n\n\n_________________________________________________________________________________________________________________________"<<endl<<endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
	cout << "\t\t\t\t\t\t>>  Quiz Result  <<" << endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
	
	//QUIZ RESULT FUNCTION CALLING
	icthardresult(); 	   	
}

}
				
	break;//ENDING CASE 02
				
				
	//CASE 02 FOR AP
					
	case '3':
		


		
	//INTERFACE OF AP	
	cout << "\n\t\t\t\t\t\t>>-------------------<<" << endl;
    cout << "\t\t\t\t\t\t>>  Applied Physics  <<" << endl;
    cout << "\t\t\t\t\t\t>>-------------------<<" << endl;
    
    
    	//selection of Easy - Medium - Hard 

cout<<"\n\n > Select your Difficulty Level:";
cout<<"\n\n\n 1) Easy \t\t 2) Medium \t\t 3) Hard"<<endl;
    
    
    //STORING CHOICE
    cout<<"\n\n\n > Select 1 for Easy 2 for Medium 3 for Hard : ";
    select=getch();
    cout<<select<<endl;
    system("CLS");
    
    if(select=='1')
    {
    	//INTERFACE OF AP	
	cout << "\n\t\t\t\t\t\t>>-------------------<<" << endl;
    cout << "\t\t\t\t\t\t>>  Applied Physics  <<" << endl;
    cout << "\t\t\t\t\t\t>>-------------------<<" << endl;	
    //FUNCTION CALLING
	apeasy();
	
	//STORING ALPHABET 				
cout<<"\n\n\nPress 'G' to generate Quiz Report:";
select=getch();
cout<<select<<endl;
system("CLS");
if(select=='g'||select=='G')			
{
					
	//RESULT INTERFACE				
	cout<<"\n\n\n_________________________________________________________________________________________________________________________"<<endl<<endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
	cout << "\t\t\t\t\t\t>>  Quiz Result  <<" << endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
							
				
	//QUIZ RESULT FUNCTION CALLING				
	apeasyresult();
	
		
    	
	}
}
    
    else if(select=='2')
    {
    
	
	    	//INTERFACE OF AP	
	cout << "\n\t\t\t\t\t\t>>-------------------<<" << endl;
    cout << "\t\t\t\t\t\t>>  Applied Physics  <<" << endl;
    cout << "\t\t\t\t\t\t>>-------------------<<" << endl;	
    //FUNCTION CALLING
	apmedium();
	
	//STORING ALPHABET 				
cout<<"\n\n\nPress 'G' to generate Quiz Report:";
select=getch();
cout<<select<<endl;
system("CLS");
if(select=='g'||select=='G')			
				
	{//RESULT INTERFACE				
	cout<<"\n\n\n_________________________________________________________________________________________________________________________"<<endl<<endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
	cout << "\t\t\t\t\t\t>>  Quiz Result  <<" << endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
							
				
	//QUIZ RESULT FUNCTION CALLING				
	apmediumresult();	
    	
    	
	}
}
	
	else if(select=='3')
	{
		    	//INTERFACE OF AP	
	cout << "\n\t\t\t\t\t\t>>-------------------<<" << endl;
    cout << "\t\t\t\t\t\t>>  Applied Physics  <<" << endl;
    cout << "\t\t\t\t\t\t>>-------------------<<" << endl;	
    //FUNCTION CALLING
	aphard();
	
	//STORING ALPHABET 				
cout<<"\n\n\nPress 'G' to generate Quiz Report:";
select=getch();
cout<<select<<endl;
system("CLS");
if(select=='g'||select=='G')			
{
								
	//RESULT INTERFACE				
	cout<<"\n\n\n_________________________________________________________________________________________________________________________"<<endl<<endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
	cout << "\t\t\t\t\t\t>>  Quiz Result  <<" << endl;
    cout << "\t\t\t\t\t\t>>---------------<<" << endl;
							
				
	//QUIZ RESULT FUNCTION CALLING				
	aphardresult();
		
	}
    
}
    
 
	
	break;//ENDING CASE 03
				
				
			default:
			cout<<"invalid input";	
				
		}
		cout<<"-> Press 'Y' key to reattempt or others keys to terminate: ";
        press=getch();
        system("CLS");
	}
}
	while(press=='y'||press=='Y');//INFINITE TIMES USER CAN TAKE TEST 
	
	
	return 0;
	
}
