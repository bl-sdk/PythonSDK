#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTwoPanelInterfaceGFxDefinition(py::module &m)
{
    py::class_< UTwoPanelInterfaceGFxDefinition,  UWillowInventoryGFxDefinition   >(m, "UTwoPanelInterfaceGFxDefinition")
		.def_static("StaticClass", &UTwoPanelInterfaceGFxDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PathToBackgroundArtClip", &UTwoPanelInterfaceGFxDefinition::PathToBackgroundArtClip)
          ;
}