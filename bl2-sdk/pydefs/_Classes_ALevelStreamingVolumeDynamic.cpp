#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALevelStreamingVolumeDynamic(py::module &m)
{
    py::class_< ALevelStreamingVolumeDynamic,  ALevelStreamingVolume   >(m, "ALevelStreamingVolumeDynamic")
		.def_static("StaticClass", &ALevelStreamingVolumeDynamic::StaticClass, py::return_value_policy::reference)
          ;
}