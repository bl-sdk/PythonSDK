#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineRegistrant(py::object m)
{
    py::class_< FOnlineRegistrant >(m, "FOnlineRegistrant")
        .def_readwrite("PlayerNetId", &FOnlineRegistrant::PlayerNetId)
  ;
}