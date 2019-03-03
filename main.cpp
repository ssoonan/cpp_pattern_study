//
// Created by zappe on 2019-03-03.
//
#include <iostream>
#include <vector>
#include <string>
#include <tuple>

enum class Relationship
{
    parent,
    child,
    sibling
};

struct Person
{
    std::string name;
};

struct Relationships
{
    std::vector<std::tuple<Person, Relationship, Person>> relations;

    void add_parent_and_child(const Person& parent, const Person& child)
    {
        relations.push_back({parent, Relationship::parent, child});
        relations.push_back({child, Relationship ::child, parent});
    }
};

struct Lamp
{
    void TurnOn()
    {
        std::cout << "Turn On the Lamp" << std::endl;
    }
    void TurnOff()
    {
        std::cout << "Turn Off the Lamp" << std::endl;
    }
};


int main()
{
    Person parent{"John"};
    Person child1{"Chris"}, child2{"Matt"};


}