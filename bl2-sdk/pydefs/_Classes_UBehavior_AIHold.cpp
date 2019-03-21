#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AIHold()
{
    class_< UBehavior_AIHold, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AIHold", no_init)
        .def_readwrite("Reason", &UBehavior_AIHold::Reason)
        .def_readwrite("Action", &UBehavior_AIHold::Action)
        .def_readwrite("Type", &UBehavior_AIHold::Type)
        .def("StaticClass", &UBehavior_AIHold::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AIHold::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}