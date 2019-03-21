#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALevelStreamingVolumeDynamic(py::object m)
{
    py::class_< ALevelStreamingVolumeDynamic,  ALevelStreamingVolume   >(m, "ALevelStreamingVolumeDynamic")
        .def("StaticClass", &ALevelStreamingVolumeDynamic::StaticClass, py::return_value_policy::reference)
          ;
}