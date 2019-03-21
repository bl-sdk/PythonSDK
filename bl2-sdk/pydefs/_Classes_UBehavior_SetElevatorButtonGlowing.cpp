#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetElevatorButtonGlowing()
{
    class_< UBehavior_SetElevatorButtonGlowing, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetElevatorButtonGlowing", no_init)
        .def("StaticClass", &UBehavior_SetElevatorButtonGlowing::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetElevatorButtonGlowing::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}