#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_MoveTo(py::object m)
{
    py::class_< UAction_MoveTo,  UActionSequencePawn   >(m, "UAction_MoveTo")
        .def("StaticClass", &UAction_MoveTo::StaticClass, py::return_value_policy::reference)
          ;
}