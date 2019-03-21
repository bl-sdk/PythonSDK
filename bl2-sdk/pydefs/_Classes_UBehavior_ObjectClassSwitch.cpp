#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ObjectClassSwitch()
{
    class_< UBehavior_ObjectClassSwitch, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ObjectClassSwitch", no_init)
        .def_readwrite("ObjectClassName", &UBehavior_ObjectClassSwitch::ObjectClassName)
        .def("StaticClass", &UBehavior_ObjectClassSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ObjectClassSwitch::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}