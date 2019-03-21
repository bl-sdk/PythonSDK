#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineArbitrationRegistrant()
{
    class_< FOnlineArbitrationRegistrant >("FOnlineArbitrationRegistrant", no_init)
        .def_readwrite("MachineId", &FOnlineArbitrationRegistrant::MachineId)
        .def_readwrite("Trustworthiness", &FOnlineArbitrationRegistrant::Trustworthiness)
        .def_readwrite("PlayerNetId", &FOnlineRegistrant::PlayerNetId)
  ;
}