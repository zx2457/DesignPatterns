#include "HostpartsFactory.h"
#include <memory>

int main()
{
        std::shared_ptr<i3AssemblyFactory> i3factory(new i3AssemblyFactory);
        i3factory->AssembleTheHost();
        std::shared_ptr<i5AssemblyFactory> i5factory(new i5AssemblyFactory);
        i5factory->AssembleTheHost();
        std::shared_ptr<i7AssemblyFactory> i7factory(new i7AssemblyFactory);
        i7factory->AssembleTheHost();
        std::shared_ptr<i9AssemblyFactory> i9factory(new i9AssemblyFactory);
        i9factory->AssembleTheHost();

        std::shared_ptr<IProduct> i3HostPart(new i3Hostparts);
        std::shared_ptr<IProduct> i5HostPart(new i5Hostparts);
        std::shared_ptr<IProduct> i7HostPart(new i7Hostparts);
        std::shared_ptr<IProduct> i9HostPart(new i9Hostparts);

        std::shared_ptr<DiyAssemblyFactory> diyfactory(new DiyAssemblyFactory);
        diyfactory->addDiyAccessories(std::bind(&IProduct::CreateCpu, i5HostPart.get()));
        diyfactory->addDiyAccessories(std::bind(&IProduct::CreateMainboard, i7HostPart.get()));
        diyfactory->addDiyAccessories(std::bind(&IProduct::CreateGraphicscard, i7HostPart.get()));
        diyfactory->addDiyAccessories(std::bind(&IProduct::CreateMemorybank, i7HostPart.get()));
        diyfactory->addDiyAccessories(std::bind(&IProduct::CreateHarddisk, i9HostPart.get()));
        diyfactory->addDiyAccessories(std::bind(&IProduct::CreatePowersupply, i9HostPart.get()));
        diyfactory->addDiyAccessories(std::bind(&IProduct::CreateHeatdissipation, i9HostPart.get()));
        diyfactory->addDiyAccessories(std::bind(&IProduct::CreateComputercase, i9HostPart.get()));
        diyfactory->AssembleTheHost();
        getchar();
        return 0;
}