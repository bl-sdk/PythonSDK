#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLocalAuthSession(py::module &m)
{
    py::class_< FLocalAuthSession,  FBaseAuthSession   >(m, "FLocalAuthSession")
        .def_readwrite("SessionUID", &FLocalAuthSession::SessionUID)
  ;
}