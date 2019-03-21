#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPickupMemento(py::object m)
{
    py::class_< FPickupMemento >(m, "FPickupMemento")
        .def_readwrite("Rotation", &FPickupMemento::Rotation)
  ;
}