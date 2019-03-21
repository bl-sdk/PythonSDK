#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FItemMemento()
{
    py::class_< FItemMemento >("FItemMemento")
        .def_readwrite("SerialNumber", &FItemMemento::SerialNumber)
  ;
}