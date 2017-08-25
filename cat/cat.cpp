/*************************************************************************
	> File Name: cat.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年08月24日 星期四 00时27分45秒
 ************************************************************************/

#include<iostream>
using namespace std;

void CatTest(); // 测试
void CatMonth(); //猫的一个月

//mamZ main()
int main()
{
    CatTest();
    CatMonth();
    return 0;
}

class Cat
{
public:
    Cat(const string& name);
    void talk();
    void eat(int f);
    void drink(int w);
    void sleep(int h);
    void sport(int h);
private:
    string name;    
    int age;
    int weight;
    int food;
    int water;
};

void CatTest()
{
    Cat cat("Maomi");
    cat.talk();
    cat.eat(10);
    cat.talk();
    cat.drink(5);
    cat.talk();
    cat.sleep(4);
    cat.talk();
    cat.sport(1);
    cat.talk();
}

void CatMonth()
{
    Cat cat("Maomi");
    for(int day = 0; day<30; day++)
    {
        //sport 1
        cat.sport(1);
        //eat 4,6 4
        cat.eat(4);
        cat.drink(6);
        cat.sleep(4);
        //
        cat.eat(6);
        cat.drink(4);
        cat.sport(2);
        cat.sleep(4);
        cat.sport(1);
        cat.eat(10);
        cat.eat(10);
        cat.sport(1);
        cat.sleep(6);
        cat.sport(1);
        cat.eat(6);
        cat.drink(6);
        cat.sleep(4);

    }
    cat.talk();
}

Cat::Cat(const string& name)
:name(name)
,food(0)
,water(0)
,weight(80)
,age(0)
{}

void Cat::talk()
{
    cout<<name<<"(age = "<<age<<"food = "<<food<<"water = "<<water<<"weight = "<<weight<<endl;
}

void Cat::eat(int f)
{
    food += f;
}

void Cat::drink(int w)
{
    water += w;
}

void Cat::sleep(int h)
{
    food -= 1*h;
    water -= 1*h;
    weight += 1*h;
    if(food < 0)
    {
        weight += food;
        food = 0;
    }
    if(water < 0)
    {
        weight += water;
        water = 0;
    }
    age += h;
}

void Cat::sport(int h)
{
    food -= 3*h;
    water -= 3*h;
    weight += 1*h;
    if(food < 0)
    {
        weight += food;
        food = 0;
    }
    if(water < 0)
    {
        weight += water;
        water = 0;
    }
    age += h;
}

