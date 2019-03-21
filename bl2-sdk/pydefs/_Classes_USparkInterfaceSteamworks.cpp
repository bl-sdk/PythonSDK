#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USparkInterfaceSteamworks()
{
    class_< USparkInterfaceSteamworks, bases< USparkInterfaceImpl >  , boost::noncopyable>("USparkInterfaceSteamworks", no_init)
        .def("StaticClass", &USparkInterfaceSteamworks::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}