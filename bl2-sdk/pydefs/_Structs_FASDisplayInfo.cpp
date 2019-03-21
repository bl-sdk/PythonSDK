#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FASDisplayInfo()
{
    py::class_< FASDisplayInfo >("FASDisplayInfo")
        .def_readwrite("X", &FASDisplayInfo::X)
        .def_readwrite("Y", &FASDisplayInfo::Y)
        .def_readwrite("Z", &FASDisplayInfo::Z)
        .def_readwrite("Rotation", &FASDisplayInfo::Rotation)
        .def_readwrite("XRotation", &FASDisplayInfo::XRotation)
        .def_readwrite("YRotation", &FASDisplayInfo::YRotation)
        .def_readwrite("XScale", &FASDisplayInfo::XScale)
        .def_readwrite("YScale", &FASDisplayInfo::YScale)
        .def_readwrite("ZScale", &FASDisplayInfo::ZScale)
        .def_readwrite("Alpha", &FASDisplayInfo::Alpha)
  ;
}