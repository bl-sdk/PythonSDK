#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTwoPanelInterfaceGFxDefinition(py::object m)
{
    py::class_< UTwoPanelInterfaceGFxDefinition,  UWillowInventoryGFxDefinition   >(m, "UTwoPanelInterfaceGFxDefinition")
        .def_readwrite("PathToBackgroundArtClip", &UTwoPanelInterfaceGFxDefinition::PathToBackgroundArtClip)
        .def("StaticClass", &UTwoPanelInterfaceGFxDefinition::StaticClass, py::return_value_policy::reference)
          ;
}