#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKeyBind()
{
    py::class_< FKeyBind >("FKeyBind")
        .def_readwrite("Name", &FKeyBind::Name)
        .def_readwrite("Command", &FKeyBind::Command)
  ;
}