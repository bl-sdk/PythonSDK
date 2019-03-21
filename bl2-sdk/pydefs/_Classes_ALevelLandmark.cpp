#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALevelLandmark()
{
    class_< ALevelLandmark, bases< AActor >  , boost::noncopyable>("ALevelLandmark", no_init)
        .def_readwrite("LandmarkName", &ALevelLandmark::LandmarkName)
        .def_readwrite("LandmarkType", &ALevelLandmark::LandmarkType)
        .def_readwrite("AssociatedStationDefinitionName", &ALevelLandmark::AssociatedStationDefinitionName)
        .def("StaticClass", &ALevelLandmark::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}