#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_PhysXLevel()
{
    class_< UBehavior_PhysXLevel, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_PhysXLevel", no_init)
        .def("StaticClass", &UBehavior_PhysXLevel::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_PhysXLevel::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}