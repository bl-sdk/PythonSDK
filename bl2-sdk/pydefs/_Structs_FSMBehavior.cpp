#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSMBehavior()
{
    py::class_< FSMBehavior >("FSMBehavior")
        .def_readwrite("Behaviors", &FSMBehavior::Behaviors)
  ;
}