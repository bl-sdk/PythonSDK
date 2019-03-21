#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ForceDownState()
{
    class_< UBehavior_ForceDownState, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ForceDownState", no_init)
        .def("StaticClass", &UBehavior_ForceDownState::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ForceDownState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}