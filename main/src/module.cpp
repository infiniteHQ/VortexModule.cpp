#include "module.hpp"

void SampleCppModule::CreateContext()
{
    SampleCppModule::Context *ctx = VX_NEW(SampleCppModule::Context);
    CSampleModule = ctx;
}

void SampleCppModule::SayHelloToConsole()
{
    std::cout << "Hello Vortex World !!" << std::endl;
}
