#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIpNetDriverSteamworks()
{
    class_< UIpNetDriverSteamworks, bases< UTcpNetDriver >  , boost::noncopyable>("UIpNetDriverSteamworks", no_init)
        .def("StaticClass", &UIpNetDriverSteamworks::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}