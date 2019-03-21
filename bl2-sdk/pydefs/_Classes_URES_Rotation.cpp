#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_Rotation(py::object m)
{
    py::class_< URES_Rotation,  UActionResource   >(m, "URES_Rotation")
        .def("StaticClass", &URES_Rotation::StaticClass, py::return_value_policy::reference)
          ;
}