#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIBodyPawn()
{
    class_< UIBodyPawn, bases< UInterface >  , boost::noncopyable>("UIBodyPawn", no_init)
        .def("StaticClass", &UIBodyPawn::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAWillowAIPawn", &UIBodyPawn::GetAWillowAIPawn, return_value_policy< reference_existing_object >())
        .def("GetAWillowPlayerPawn", &UIBodyPawn::GetAWillowPlayerPawn, return_value_policy< reference_existing_object >())
        .def("GetAWillowPawn", &UIBodyPawn::GetAWillowPawn, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}