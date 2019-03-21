#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_Movement(py::object m)
{
    py::class_< URES_Movement,  UActionResource   >(m, "URES_Movement")
        .def("StaticClass", &URES_Movement::StaticClass, py::return_value_policy::reference)
          ;
}