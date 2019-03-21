#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerInformation()
{
    class_< FPlayerInformation >("FPlayerInformation", no_init)
        .def_readwrite("ControllerName", &FPlayerInformation::ControllerName)
        .def_readwrite("PlayerName", &FPlayerInformation::PlayerName)
        .def_readwrite("UniqueId", &FPlayerInformation::UniqueId)
  ;
}