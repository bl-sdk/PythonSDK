#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMinimapIconHelper_Director(py::module &m)
{
    py::class_< FMinimapIconHelper_Director >(m, "FMinimapIconHelper_Director")
        .def_readwrite("Director", &FMinimapIconHelper_Director::Director)
        .def_readwrite("Location", &FMinimapIconHelper_Director::Location)
        .def_readwrite("ActionableMissionDefinition", &FMinimapIconHelper_Director::ActionableMissionDefinition)
  ;
}