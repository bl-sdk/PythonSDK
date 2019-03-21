#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpriteRTTComponent()
{
    py::class_< USpriteRTTComponent,  USpriteComponent   >("USpriteRTTComponent")
        .def_readwrite("SpriteRTT", &USpriteRTTComponent::SpriteRTT)
        .def("StaticClass", &USpriteRTTComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}