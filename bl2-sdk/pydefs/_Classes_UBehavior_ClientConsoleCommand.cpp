#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ClientConsoleCommand()
{
    class_< UBehavior_ClientConsoleCommand, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ClientConsoleCommand", no_init)
        .def_readwrite("Command", &UBehavior_ClientConsoleCommand::Command)
        .def("StaticClass", &UBehavior_ClientConsoleCommand::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ClientConsoleCommand::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}