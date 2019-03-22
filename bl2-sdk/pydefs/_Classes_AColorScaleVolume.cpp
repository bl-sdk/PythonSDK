#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AColorScaleVolume(py::module &m)
{
    py::class_< AColorScaleVolume,  AVolume   >(m, "AColorScaleVolume")
        .def_readwrite("ColorScale", &AColorScaleVolume::ColorScale)
        .def_readwrite("InterpTime", &AColorScaleVolume::InterpTime)
        .def("eventUnTouch", &AColorScaleVolume::eventUnTouch)
        .def("eventTouch", &AColorScaleVolume::eventTouch)
          ;
}