#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCompartmentRunList()
{
    py::class_< FCompartmentRunList >("FCompartmentRunList")
  ;
}