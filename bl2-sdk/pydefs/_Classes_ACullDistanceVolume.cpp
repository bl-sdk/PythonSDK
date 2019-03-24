#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ACullDistanceVolume(py::module &m)
{
    py::class_< ACullDistanceVolume,  AVolume   >(m, "ACullDistanceVolume")
		.def_static("StaticClass", &ACullDistanceVolume::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CullDistances", &ACullDistanceVolume::CullDistances)
          ;
}