#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UISimpleAnimPlayer(py::module &m)
{
    py::class_< UISimpleAnimPlayer,  UInterface   >(m, "UISimpleAnimPlayer")
          ;
}