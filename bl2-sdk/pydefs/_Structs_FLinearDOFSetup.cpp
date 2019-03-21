#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLinearDOFSetup(py::object m)
{
    py::class_< FLinearDOFSetup >(m, "FLinearDOFSetup")
        .def_readwrite("bLimited", &FLinearDOFSetup::bLimited)
        .def_readwrite("LimitSize", &FLinearDOFSetup::LimitSize)
  ;
}