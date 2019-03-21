#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlineLobbyInterfaceSteamworks()
{
    class_< UOnlineLobbyInterfaceSteamworks, bases< UObject >  , boost::noncopyable>("UOnlineLobbyInterfaceSteamworks", no_init)
        .def("StaticClass", &UOnlineLobbyInterfaceSteamworks::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}