#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHUDScalingAnchorDefinition(py::module &m)
{
    py::class_< UHUDScalingAnchorDefinition,  UGBXDefinition   >(m, "UHUDScalingAnchorDefinition")
		.def_static("StaticClass", &UHUDScalingAnchorDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AnchorPosition", &UHUDScalingAnchorDefinition::AnchorPosition)
          ;
}