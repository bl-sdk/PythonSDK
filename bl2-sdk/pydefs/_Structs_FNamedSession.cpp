#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNamedSession()
{
    py::class_< FNamedSession >("FNamedSession")
        .def_readwrite("SessionName", &FNamedSession::SessionName)
        .def_readwrite("SessionInfo", &FNamedSession::SessionInfo)
        .def_readwrite("GameSettings", &FNamedSession::GameSettings)
        .def_readwrite("Registrants", &FNamedSession::Registrants)
        .def_readwrite("ArbitrationRegistrants", &FNamedSession::ArbitrationRegistrants)
  ;
}