#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALevelLandmark()
{
    py::class_< ALevelLandmark,  AActor   >("ALevelLandmark")
        .def_readwrite("LandmarkName", &ALevelLandmark::LandmarkName)
        .def_readwrite("LandmarkType", &ALevelLandmark::LandmarkType)
        .def_readwrite("AssociatedStationDefinitionName", &ALevelLandmark::AssociatedStationDefinitionName)
        .def("StaticClass", &ALevelLandmark::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}