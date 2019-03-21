#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetBeingHealed()
{
    class_< UBehavior_SetBeingHealed, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetBeingHealed", no_init)
        .def("StaticClass", &UBehavior_SetBeingHealed::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetBeingHealed::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}