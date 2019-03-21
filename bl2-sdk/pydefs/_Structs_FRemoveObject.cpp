#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRemoveObject()
{
    py::class_< FRemoveObject >("FRemoveObject")
        .def_readwrite("Name", &FRemoveObject::Name)
  ;
}