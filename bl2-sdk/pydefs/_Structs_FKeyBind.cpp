#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKeyBind(py::module &m)
{
    py::class_< FKeyBind >(m, "FKeyBind")
        .def_readwrite("Name", &FKeyBind::Name)
        .def_readwrite("Command", &FKeyBind::Command)
  ;
}