#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_UseObject()
{
    class_< UBehavior_UseObject, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_UseObject", no_init)
        .def_readwrite("UseType", &UBehavior_UseObject::UseType)
        .def_readwrite("User", &UBehavior_UseObject::User)
        .def("StaticClass", &UBehavior_UseObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_UseObject::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}