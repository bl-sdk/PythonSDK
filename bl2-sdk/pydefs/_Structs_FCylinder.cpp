#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCylinder()
{
    py::class_< FCylinder >("FCylinder")
        .def_readwrite("Radius", &FCylinder::Radius)
        .def_readwrite("Height", &FCylinder::Height)
  ;
}