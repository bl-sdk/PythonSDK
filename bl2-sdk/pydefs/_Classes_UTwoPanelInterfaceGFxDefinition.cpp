#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTwoPanelInterfaceGFxDefinition()
{
    py::class_< UTwoPanelInterfaceGFxDefinition,  UWillowInventoryGFxDefinition   >("UTwoPanelInterfaceGFxDefinition")
        .def_readwrite("PathToBackgroundArtClip", &UTwoPanelInterfaceGFxDefinition::PathToBackgroundArtClip)
        .def("StaticClass", &UTwoPanelInterfaceGFxDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}