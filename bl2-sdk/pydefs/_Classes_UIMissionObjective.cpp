#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIMissionObjective(py::module &m)
{
    py::class_< UIMissionObjective,  UInterface   >(m, "UIMissionObjective")
		.def_static("StaticClass", &UIMissionObjective::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjectiveBit", &UIMissionObjective::eventGetObjectiveBit)
          ;
}