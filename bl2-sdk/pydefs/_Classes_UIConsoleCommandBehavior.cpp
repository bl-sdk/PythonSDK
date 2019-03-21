#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIConsoleCommandBehavior()
{
    class_< UIConsoleCommandBehavior, bases< UInterface >  , boost::noncopyable>("UIConsoleCommandBehavior", no_init)
        .def("StaticClass", &UIConsoleCommandBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_ClientConsoleCommand", &UIConsoleCommandBehavior::Behavior_ClientConsoleCommand)
        .def("Behavior_ConsoleCommand", &UIConsoleCommandBehavior::Behavior_ConsoleCommand)
        .staticmethod("StaticClass")
  ;
}