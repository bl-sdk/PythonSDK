#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ClearObjective()
{
    class_< UBehavior_ClearObjective, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ClearObjective", no_init)
        .def_readwrite("ObjectiveToClear", &UBehavior_ClearObjective::ObjectiveToClear)
        .def("StaticClass", &UBehavior_ClearObjective::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ClearObjective::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}