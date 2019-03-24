#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevel(py::module &m)
{
    py::class_< ULevel,  UObject   >(m, "ULevel")
		.def_static("StaticClass", &ULevel::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LightmapTotalSize", &ULevel::LightmapTotalSize)
        .def_readwrite("ShadowmapTotalSize", &ULevel::ShadowmapTotalSize)
          ;
}