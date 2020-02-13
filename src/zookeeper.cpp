#include "zookeeper.h"

#include <iostream>
#include <memory>

#include "activity.h"

Zookeeper& Zookeeper::operator=(Zookeeper zookeeper)
{
    std::swap(name_, zookeeper.name_);
    return *this;
}

void Zookeeper::ExecuteResponsibilities(const std::list<Animal::Ptr>& animals) const
{
    WakeAnimals(animals);
    RollCall(animals);
    FeedAnimals(animals);
    ExerciseAnimals(animals);
    ShutDownZoo(animals);
}

void Zookeeper::WakeAnimals(const std::list<Animal::Ptr>& animals) const
{
    auto p_act = std::make_shared<Activity>(ActivityType::Wake);
    NotifyObservers(p_act);

    std::cout << "Waking up animals" << std::endl;
    std::cout << "---------------------------" << std::endl;

    for(const auto& animal: animals)
    {
        animal->WakeUp();
    }

    std::cout << std::endl;
    std::cout << std::endl;
}

void Zookeeper::RollCall(const std::list<Animal::Ptr>& animals) const
{
    auto p_act = std::make_shared<Activity>(ActivityType::RollCall);
    NotifyObservers(p_act);

    std::cout << "Roll calling animals" << std::endl;
    std::cout << "---------------------------" << std::endl;

    for(const auto& animal: animals)
    {
        animal->MakeNoise();
    }

    std::cout << std::endl;
    std::cout << std::endl;
}

void Zookeeper::FeedAnimals(const std::list<Animal::Ptr>& animals) const
{
    auto p_act = std::make_shared<Activity>(ActivityType::Feed);
    NotifyObservers(p_act);

    std::cout << "Feeding the animals" << std::endl;
    std::cout << "---------------------------" << std::endl;

    for(const auto& animal: animals)
    {
        animal->Eat();
    }

    std::cout << std::endl;
    std::cout << std::endl;
}

void Zookeeper::ExerciseAnimals(const std::list<Animal::Ptr>& animals) const
{
    auto p_act = std::make_shared<Activity>(ActivityType::Exercise);
    NotifyObservers(p_act);

    std::cout << "Exercising the animals" << std::endl;
    std::cout << "---------------------------" << std::endl;

    for(const auto& animal: animals)
    {
        animal->Roam();
    }

    std::cout << std::endl;
    std::cout << std::endl;
}

void Zookeeper::ShutDownZoo(const std::list<Animal::Ptr>& animals) const
{
    auto p_act = std::make_shared<Activity>(ActivityType::ShutDown);
    NotifyObservers(p_act);

    std::cout << "Shutting down the zoo" << std::endl;
    std::cout << "---------------------------" << std::endl;

    for(const auto& animal: animals)
    {
        animal->Sleep();
    }

    std::cout << std::endl;
    std::cout << std::endl;
}
