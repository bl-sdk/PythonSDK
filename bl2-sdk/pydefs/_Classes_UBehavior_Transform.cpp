#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_Transform()
{
    class_< UBehavior_Transform, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_Transform", no_init)
        .def_readwrite("Transform", &UBehavior_Transform::Transform)
        .def("StaticClass", &UBehavior_Transform::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_Transform::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}