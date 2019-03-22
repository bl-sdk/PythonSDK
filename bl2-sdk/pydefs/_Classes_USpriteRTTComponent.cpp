#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpriteRTTComponent(py::module &m)
{
    py::class_< USpriteRTTComponent,  USpriteComponent   >(m, "USpriteRTTComponent")
        .def_readwrite("SpriteRTT", &USpriteRTTComponent::SpriteRTT)
          ;
}