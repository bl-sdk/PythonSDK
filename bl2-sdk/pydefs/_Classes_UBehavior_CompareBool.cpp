#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_CompareBool()
{
    class_< UBehavior_CompareBool, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_CompareBool", no_init)
        .def("StaticClass", &UBehavior_CompareBool::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_CompareBool::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}