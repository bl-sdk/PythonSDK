#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_CompareValues()
{
    class_< UBehavior_CompareValues, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_CompareValues", no_init)
        .def_readwrite("ValueA", &UBehavior_CompareValues::ValueA)
        .def_readwrite("ContextB", &UBehavior_CompareValues::ContextB)
        .def_readwrite("ValueB", &UBehavior_CompareValues::ValueB)
        .def("StaticClass", &UBehavior_CompareValues::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_CompareValues::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}