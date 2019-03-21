#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_DecrementObjective()
{
    class_< UBehavior_DecrementObjective, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_DecrementObjective", no_init)
        .def_readwrite("ObjectiveToDecrement", &UBehavior_DecrementObjective::ObjectiveToDecrement)
        .def("StaticClass", &UBehavior_DecrementObjective::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_DecrementObjective::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}