#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_CompareFloat()
{
    class_< UBehavior_CompareFloat, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_CompareFloat", no_init)
        .def_readwrite("ValueA", &UBehavior_CompareFloat::ValueA)
        .def_readwrite("ValueB", &UBehavior_CompareFloat::ValueB)
        .def("StaticClass", &UBehavior_CompareFloat::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_CompareFloat::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}