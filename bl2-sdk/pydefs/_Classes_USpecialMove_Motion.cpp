#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_Motion(py::object m)
{
    py::class_< USpecialMove_Motion,  UWillowAnimDefinition   >(m, "USpecialMove_Motion")
        .def("StaticClass", &USpecialMove_Motion::StaticClass, py::return_value_policy::reference)
          ;
}