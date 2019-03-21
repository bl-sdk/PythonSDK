#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNamedSession()
{
    class_< FNamedSession >("FNamedSession", no_init)
        .def_readwrite("SessionName", &FNamedSession::SessionName)
        .def_readwrite("SessionInfo", &FNamedSession::SessionInfo)
        .def_readwrite("GameSettings", &FNamedSession::GameSettings)
        .def_readwrite("Registrants", &FNamedSession::Registrants)
        .def_readwrite("ArbitrationRegistrants", &FNamedSession::ArbitrationRegistrants)
  ;
}