#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 int
 float
 double
 char
 bool
 void
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int people = 1;
    int boy = 3;
    int girl = 4;

    float price = 5.5f;
    float kilo = 6.3f;
    float meter = 7.6f;

    double speed = 2.1;
    double time = 10.53;
    double size = 9.5;

    char grade = 'a';
    char level = 'b';
    char list = 'c';

    bool audioPluginCodeEasy = false;
    bool audioPluginCodeHard = true;
    bool codeMakePeopleBald = true;

    


    
    ignoreUnused(number, people, boy, girl, price, kilo, meter, speed, time, size, grade, level, list, audioPluginCodeEasy, audioPluginCodeHard, codeMakePeopleBald); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 


int countDown(int numberOfBoy = 1, int numberOfGirl = 2)
{
    ignoreUnused(numberOfBoy, numberOfGirl);
    return {}; 
} 
 


int chickenAndRabbit(int chicken, int rabbit = 3)
{
    ignoreUnused(chicken, rabbit);
    return {};
}
 


bool buyACar(int carQuality = 1, double carPrice = 1.5)
{
    ignoreUnused(carQuality, carPrice);
    return {};
}



bool learnCode(bool codeNeed = true, int codeType = 1)
{
    ignoreUnused(codeNeed, codeType);
    return {};
}



bool feedDog(int dogHungry = 0, double feedTime = 8.0)
{
    ignoreUnused(dogHungry, feedTime);
    return {};
}



void checkGrade(bool textFinshed = true, char gradeLevel = 'B')
{
    ignoreUnused(textFinshed, gradeLevel);
    return ;
}



void loveCPP(int completeDay = 60, bool FallInLove = false)
{
    ignoreUnused(completeDay, FallInLove);
    return ;
}



double runSpeed(int runTime = 23, double runMile = 3.3)
{
    ignoreUnused(runTime, runMile);
    return {};
}



bool goOutside(bool weatherGood = true, bool needRelax = true)
{
    ignoreUnused(weatherGood, needRelax);
    return {};
}



bool saveMoney(int moneyOwn = 5, int nextDayPaid = 20)
{
    ignoreUnused(moneyOwn, nextDayPaid);
    return {};
}


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto classmatesCountedDown = countDown(2,5); 
    
    //2)
    auto chickAndRabbitMath = chickenAndRabbit(4, 6);
    //3)
    auto carBought = buyACar(4, 5.5);
    //4)
    auto codeLearnt = learnCode(true, 2);
    //5)
    auto dogFed = feedDog(1, 8.2);
    //6)
    checkGrade(true, 'B');
    //7)
    loveCPP(30, true);
    //8)
    auto speedOfRun = runSpeed(20, 3.0);
    //9)
    auto goOutsideOrNot = goOutside(false, true);
    //10)
    auto saveMoneyOrNot = saveMoney(2,30);
    
    ignoreUnused(carRented, classmatesCountedDown, chickAndRabbitMath, carBought, codeLearnt, dogFed, checkGrade, loveCPP, speedOfRun, goOutsideOrNot, saveMoneyOrNot);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
