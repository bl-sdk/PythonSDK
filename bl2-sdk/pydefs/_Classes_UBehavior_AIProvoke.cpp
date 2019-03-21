#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AIProvoke()
{
    class_< UBehavior_AIProvoke, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AIProvoke", no_init)
        .def_readwrite("ProvokeInstigator", &UBehavior_AIProvoke::ProvokeInstigator)
        .def("StaticClass", &UBehavior_AIProvoke::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AIProvoke::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}