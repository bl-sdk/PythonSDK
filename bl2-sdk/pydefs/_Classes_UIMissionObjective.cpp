#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIMissionObjective(py::object m)
{
    py::class_< UIMissionObjective,  UInterface   >(m, "UIMissionObjective")
        .def("StaticClass", &UIMissionObjective::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjectiveBit", &UIMissionObjective::eventGetObjectiveBit)
          ;
}