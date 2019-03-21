#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineRegistrant()
{
    py::class_< FOnlineRegistrant >("FOnlineRegistrant")
        .def_readwrite("PlayerNetId", &FOnlineRegistrant::PlayerNetId)
  ;
}