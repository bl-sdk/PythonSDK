#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineRegistrant(py::module &m)
{
    py::class_< FOnlineRegistrant >(m, "FOnlineRegistrant")
        .def_readwrite("PlayerNetId", &FOnlineRegistrant::PlayerNetId)
  ;
}