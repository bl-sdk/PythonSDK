#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPickupMemento()
{
    py::class_< FPickupMemento >("FPickupMemento")
        .def_readwrite("Rotation", &FPickupMemento::Rotation)
  ;
}