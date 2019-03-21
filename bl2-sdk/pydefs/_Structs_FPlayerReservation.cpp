#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerReservation()
{
    class_< FPlayerReservation >("FPlayerReservation", no_init)
        .def_readwrite("NetId", &FPlayerReservation::NetId)
        .def_readwrite("Skill", &FPlayerReservation::Skill)
        .def_readwrite("XpLevel", &FPlayerReservation::XpLevel)
        .def_readwrite("Mu", &FPlayerReservation::Mu)
        .def_readwrite("Sigma", &FPlayerReservation::Sigma)
        .def_readwrite("ElapsedSessionTime", &FPlayerReservation::ElapsedSessionTime)
  ;
}