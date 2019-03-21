#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRemoveObject(py::object m)
{
    py::class_< FRemoveObject >(m, "FRemoveObject")
        .def_readwrite("Name", &FRemoveObject::Name)
  ;
}