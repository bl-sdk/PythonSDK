#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_LeaderCommand()
{
    class_< UBehavior_LeaderCommand, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_LeaderCommand", no_init)
        .def_readwrite("Type", &UBehavior_LeaderCommand::Type)
        .def_readwrite("Action", &UBehavior_LeaderCommand::Action)
        .def("StaticClass", &UBehavior_LeaderCommand::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_LeaderCommand::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}