#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_Conditional()
{
    class_< UBehavior_Conditional, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_Conditional", no_init)
        .def_readwrite("Conditions", &UBehavior_Conditional::Conditions)
        .def("StaticClass", &UBehavior_Conditional::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_Conditional::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}