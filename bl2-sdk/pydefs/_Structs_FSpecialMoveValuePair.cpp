#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpecialMoveValuePair(py::object m)
{
    py::class_< FSpecialMoveValuePair >(m, "FSpecialMoveValuePair")
        .def_readwrite("Key", &FSpecialMoveValuePair::Key)
        .def_readwrite("Value", &FSpecialMoveValuePair::Value)
  ;
}