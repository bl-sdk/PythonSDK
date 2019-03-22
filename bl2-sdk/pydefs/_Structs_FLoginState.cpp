#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLoginState(py::module &m)
{
    py::class_< FLoginState >(m, "FLoginState")
        .def_readwrite("LoginName", &FLoginState::LoginName)
  ;
}