#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHUDScalingAnchorDefinition()
{
    py::class_< UHUDScalingAnchorDefinition,  UGBXDefinition   >("UHUDScalingAnchorDefinition")
        .def_readwrite("AnchorPosition", &UHUDScalingAnchorDefinition::AnchorPosition)
        .def("StaticClass", &UHUDScalingAnchorDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}