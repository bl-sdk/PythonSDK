#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AGamePawn()
{
    class_< AGamePawn, bases< APawn >  , boost::noncopyable>("AGamePawn", no_init)
        .def("StaticClass", &AGamePawn::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}