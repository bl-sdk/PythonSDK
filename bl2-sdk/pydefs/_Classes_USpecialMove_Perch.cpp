#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_Perch(py::object m)
{
    py::class_< USpecialMove_Perch,  UWillowAnimDefinition   >(m, "USpecialMove_Perch")
        .def("StaticClass", &USpecialMove_Perch::StaticClass, py::return_value_policy::reference)
          ;
}