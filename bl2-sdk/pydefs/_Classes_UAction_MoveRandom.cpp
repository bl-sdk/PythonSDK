#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_MoveRandom(py::object m)
{
    py::class_< UAction_MoveRandom,  UActionSequencePawn   >(m, "UAction_MoveRandom")
        .def("StaticClass", &UAction_MoveRandom::StaticClass, py::return_value_policy::reference)
          ;
}