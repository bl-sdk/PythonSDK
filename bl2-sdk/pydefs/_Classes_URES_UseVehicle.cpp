#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_UseVehicle()
{
    class_< URES_UseVehicle, bases< UActionResource >  , boost::noncopyable>("URES_UseVehicle", no_init)
        .def("StaticClass", &URES_UseVehicle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}