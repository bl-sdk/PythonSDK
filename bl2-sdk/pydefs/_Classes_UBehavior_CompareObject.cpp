#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_CompareObject()
{
    class_< UBehavior_CompareObject, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_CompareObject", no_init)
        .def_readwrite("ObjectA", &UBehavior_CompareObject::ObjectA)
        .def_readwrite("ObjectB", &UBehavior_CompareObject::ObjectB)
        .def("StaticClass", &UBehavior_CompareObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_CompareObject::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}