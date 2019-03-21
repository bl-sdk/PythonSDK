#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEvalActionData(py::object m)
{
    py::class_< FEvalActionData >(m, "FEvalActionData")
        .def_readwrite("Action", &FEvalActionData::Action)
  ;
}