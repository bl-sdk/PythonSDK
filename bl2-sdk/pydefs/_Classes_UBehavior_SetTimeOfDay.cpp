#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetTimeOfDay()
{
    class_< UBehavior_SetTimeOfDay, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetTimeOfDay", no_init)
        .def_readwrite("TimeOfDay", &UBehavior_SetTimeOfDay::TimeOfDay)
        .def("StaticClass", &UBehavior_SetTimeOfDay::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetTimeOfDay::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}