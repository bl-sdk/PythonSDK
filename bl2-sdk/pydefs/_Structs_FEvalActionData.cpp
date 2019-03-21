#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEvalActionData()
{
    py::class_< FEvalActionData >("FEvalActionData")
        .def_readwrite("Action", &FEvalActionData::Action)
  ;
}