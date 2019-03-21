#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_CompareInt()
{
    class_< UBehavior_CompareInt, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_CompareInt", no_init)
        .def_readwrite("A", &UBehavior_CompareInt::A)
        .def_readwrite("B", &UBehavior_CompareInt::B)
        .def("StaticClass", &UBehavior_CompareInt::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_CompareInt::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}