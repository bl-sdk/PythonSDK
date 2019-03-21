#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineArbitrationRegistrant(py::object m)
{
    py::class_< FOnlineArbitrationRegistrant >(m, "FOnlineArbitrationRegistrant")
        .def_readwrite("MachineId", &FOnlineArbitrationRegistrant::MachineId)
        .def_readwrite("Trustworthiness", &FOnlineArbitrationRegistrant::Trustworthiness)
        .def_readwrite("PlayerNetId", &FOnlineRegistrant::PlayerNetId)
  ;
}