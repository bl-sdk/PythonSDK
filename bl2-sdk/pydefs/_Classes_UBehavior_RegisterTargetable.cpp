#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_RegisterTargetable()
{
    class_< UBehavior_RegisterTargetable, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_RegisterTargetable", no_init)
        .def("StaticClass", &UBehavior_RegisterTargetable::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_RegisterTargetable::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}