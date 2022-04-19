#pragma once
#include <string>
#include <iostream>
using namespace std;

class IProduct
{
public:
        virtual ~IProduct() {}
private:
        string m_cpu;
        string m_mainboard;
        string m_graphicscard;
        string m_memorybank;
        string m_harddisk;
        string m_powersupply;
        string m_heatdissipation;
        string m_computercase;
public:
        string GetCpu() { return m_cpu; }
        string GetMainboard() { return m_mainboard; }
        string GetGraphicscard() { return m_graphicscard; }
        string GetMemorybank() { return m_memorybank; }
        string GetHarddisk() { return m_harddisk; }
        string GetPowersupply() { return m_powersupply; }
        string GetHeatdissipation() { return m_heatdissipation; }
        string GetComputercase() { return m_computercase; }
        void   SetCpu(string cpu) { m_cpu = cpu; }
        void   SetMainboard(string mainboard) { m_mainboard = mainboard; }
        void   SetGraphicscard(string graphicscard) { m_graphicscard = graphicscard; }
        void   SetMemorybank(string memorybank) { m_memorybank = memorybank; }
        void   SetHarddisk(string harddisk) { m_harddisk = harddisk; }
        void   SetPowersupply(string powersupply) { m_powersupply = powersupply; }
        void   SetHeatdissipation(string heatdissipation) { m_heatdissipation = heatdissipation; }
        void   SetComputercase(string computercase) { m_computercase = computercase; }
};