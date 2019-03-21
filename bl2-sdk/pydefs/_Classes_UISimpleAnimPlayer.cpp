#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UISimpleAnimPlayer(py::object m)
{
    py::class_< UISimpleAnimPlayer,  UInterface   >(m, "UISimpleAnimPlayer")
        .def("StaticClass", &UISimpleAnimPlayer::StaticClass, py::return_value_policy::reference)
          ;
}