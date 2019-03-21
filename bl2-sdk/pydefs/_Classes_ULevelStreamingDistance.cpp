#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelStreamingDistance()
{
    py::class_< ULevelStreamingDistance,  ULevelStreaming   >("ULevelStreamingDistance")
        .def_readwrite("Origin", &ULevelStreamingDistance::Origin)
        .def_readwrite("MaxDistance", &ULevelStreamingDistance::MaxDistance)
        .def("StaticClass", &ULevelStreamingDistance::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}