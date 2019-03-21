#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_Turn(py::object m)
{
    py::class_< USpecialMove_Turn,  USpecialMove_Motion   >(m, "USpecialMove_Turn")
        .def("StaticClass", &USpecialMove_Turn::StaticClass, py::return_value_policy::reference)
          ;
}