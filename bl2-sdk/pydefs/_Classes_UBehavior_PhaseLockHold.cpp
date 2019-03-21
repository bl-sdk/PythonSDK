#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_PhaseLockHold()
{
    class_< UBehavior_PhaseLockHold, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_PhaseLockHold", no_init)
        .def_readwrite("Reason", &UBehavior_PhaseLockHold::Reason)
        .def_readwrite("Action", &UBehavior_PhaseLockHold::Action)
        .def("StaticClass", &UBehavior_PhaseLockHold::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_PhaseLockHold::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}