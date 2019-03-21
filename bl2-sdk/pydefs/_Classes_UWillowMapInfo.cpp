#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowMapInfo()
{
    class_< UWillowMapInfo, bases< UMapInfo >  , boost::noncopyable>("UWillowMapInfo", no_init)
        .def_readwrite("TacticalMapMovie", &UWillowMapInfo::TacticalMapMovie)
        .def_readwrite("TacticalMapVolume", &UWillowMapInfo::TacticalMapVolume)
        .def_readwrite("FrontEndMovieDef", &UWillowMapInfo::FrontEndMovieDef)
        .def("StaticClass", &UWillowMapInfo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}