#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ConsoleCommand()
{
    class_< UBehavior_ConsoleCommand, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ConsoleCommand", no_init)
        .def_readwrite("Command", &UBehavior_ConsoleCommand::Command)
        .def("StaticClass", &UBehavior_ConsoleCommand::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ConsoleCommand::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}