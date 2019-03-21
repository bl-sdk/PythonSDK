#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FViewConeInfo()
{
    py::class_< FViewConeInfo >("FViewConeInfo")
        .def_readwrite("ConeOrigin", &FViewConeInfo::ConeOrigin)
        .def_readwrite("ConeDirection", &FViewConeInfo::ConeDirection)
        .def_readwrite("ConeAngle", &FViewConeInfo::ConeAngle)
        .def_readwrite("ConeLength", &FViewConeInfo::ConeLength)
        .def_readwrite("ConeColor", &FViewConeInfo::ConeColor)
  ;
}