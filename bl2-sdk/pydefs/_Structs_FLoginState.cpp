#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLoginState()
{
    py::class_< FLoginState >("FLoginState")
        .def_readwrite("LoginName", &FLoginState::LoginName)
  ;
}