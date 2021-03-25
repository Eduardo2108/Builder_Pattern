//
// Created by eduardo on 3/18/21.
//
#include <string>
#include <iostream>

using namespace std;


class Builder;

class Computer {
private:
    int ram;
    int space;
    string processor;
    string graphicsCard;

public:
    Computer() {
        this->cooler = "stock";
        this->graphicsCard = "stock";
        this->ram = 0;
        this->caseTower = "stock";
        this->space = 0;
        this->processor = "stock";
    }

private:
    string caseTower;
    string cooler;
public:

    void show() {
        cout << "------------- Computer -------------" << "\n";
        cout << "* Processor: " << this->processor << " \n";
        cout << "* GPU: " << this->graphicsCard << "\n";
        cout << "* RAM: " << this->ram << "\n";
        cout << "* ROM: " << this->space << "\n";
        cout << "* Case: " << this->caseTower  << "\n";
        cout << "* cooler: " << this->cooler  << "\n";
        cout << "------------------------------------" << "\n";
    }

    int getRam() const {
        return ram;
    }

    void setRam(int ram) {
        Computer::ram = ram;
    }

    int getSpace() const {
        return space;
    }

    void setSpace(int space) {
        Computer::space = space;
    }

    const string &getProcessor() const {
        return processor;
    }

    void setProcessor(const string &processor) {
        Computer::processor = processor;
    }

    const string &getGraphicsCard() const {
        return graphicsCard;
    }

    void setGraphicsCard(const string &graphicsCard) {
        Computer::graphicsCard = graphicsCard;
    }

    const string &getCaseTower() const {
        return caseTower;
    }

    void setCaseTower(const string &caseTower) {
        Computer::caseTower = caseTower;
    }

    const string &getCooler() const {
        return cooler;
    }

    void setCooler(const string &cooler) {
        Computer::cooler = cooler;
    }
};


class Builder {

private:
    Computer *instance;

public:
    Builder() {
        this->instance = new Computer();
    }

    Builder * withRam(int ram) {
        this->instance->setRam(ram);
        return this;
    }

    Builder * withSpace(int space) {
        this->instance->setSpace(space);
        return this;

    }

    Builder * withProcessor(string processor) {
        this->instance->setProcessor(processor);
        return this;
    }

    Builder * withGPU(string gpu) {
        this->instance->setGraphicsCard(gpu);
        return this;
    }

    Builder * withCase(string tower) {
        this->instance->setCaseTower(tower);
        return this;
    }

    Builder * withCooler(string cooler) {
        this->instance->setCooler(cooler);
        return this;
    }

    Computer *build() {
        return this->instance;
    }
};