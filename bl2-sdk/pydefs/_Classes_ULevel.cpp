#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevel()
{
    py::class_< ULevel,  UObject   >("ULevel")
        .def_readonly("UnknownData00", &ULevel::UnknownData00)
        .def_readwrite("LightmapTotalSize", &ULevel::LightmapTotalSize)
        .def_readwrite("ShadowmapTotalSize", &ULevel::ShadowmapTotalSize)
        .def_readonly("UnknownData01", &ULevel::UnknownData01)
        .def("StaticClass", &ULevel::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}