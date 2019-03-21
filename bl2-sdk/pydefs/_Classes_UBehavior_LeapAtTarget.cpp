#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_LeapAtTarget()
{
    class_< UBehavior_LeapAtTarget, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_LeapAtTarget", no_init)
        .def("StaticClass", &UBehavior_LeapAtTarget::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}