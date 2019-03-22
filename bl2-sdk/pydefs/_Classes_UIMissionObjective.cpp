#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIMissionObjective(py::module &m)
{
    py::class_< UIMissionObjective,  UInterface   >(m, "UIMissionObjective")
        .def("eventGetObjectiveBit", &UIMissionObjective::eventGetObjectiveBit)
          ;
}