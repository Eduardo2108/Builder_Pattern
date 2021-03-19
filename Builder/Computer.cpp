//
// Created by eduardo on 3/18/21.
//
#include <string>

using namespace std;

class Computer {
private:
    int ram;
    int space;
    string processor;
    string graphicsCard;
public:
    Computer() {
        this->cooler = "stock cooler";
        this->graphicsCard = "stock graphics card";
        this->ram = 8;
        this->caseTower = "stock case";
        this->space = 1000;
        this->processor = "stock processor";
    }

private:
    string caseTower;
    string cooler;
public:
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

    void withRam(int ram) {
        this->instance->setRam(ram);
    }

    void withSpace(int space) {
        this->instance->setSpace(space);
    }

    void withProcessor(string processor) {
        this->instance->setProcessor(processor);
    }

    void withGPU(string gpu) {
        this->instance->setGraphicsCard(gpu);
    }

    void withCase(string tower) {
        this->instance->setCaseTower(tower);
    }

    void withCooler(string cooler) {
        this->instance->setCooler(cooler);
    }

    Computer *build() {
        return this->instance;
    }
};