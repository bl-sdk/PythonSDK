#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UISimpleAnimPlayer(py::module &m)
{
    py::class_< UISimpleAnimPlayer,  UInterface   >(m, "UISimpleAnimPlayer")
		.def_static("StaticClass", &UISimpleAnimPlayer::StaticClass, py::return_value_policy::reference)
          ;
}