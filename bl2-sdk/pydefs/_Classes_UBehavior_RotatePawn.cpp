#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_RotatePawn()
{
    class_< UBehavior_RotatePawn, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_RotatePawn", no_init)
        .def_readwrite("RotateDirection", &UBehavior_RotatePawn::RotateDirection)
        .def_readwrite("Time", &UBehavior_RotatePawn::Time)
        .def("StaticClass", &UBehavior_RotatePawn::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_RotatePawn::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}