#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_SpeedChange(py::module &m)
{
    py::class_< URES_SpeedChange,  UActionResource   >(m, "URES_SpeedChange")
        .def("StaticClass", &URES_SpeedChange::StaticClass, py::return_value_policy::reference)
          ;
}