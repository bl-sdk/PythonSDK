#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLocalAuthSession()
{
    py::class_< FLocalAuthSession,  FBaseAuthSession   >("FLocalAuthSession")
        .def_readwrite("SessionUID", &FLocalAuthSession::SessionUID)
  ;
}