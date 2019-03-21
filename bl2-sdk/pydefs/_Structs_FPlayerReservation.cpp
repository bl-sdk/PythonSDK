#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerReservation(py::object m)
{
    py::class_< FPlayerReservation >(m, "FPlayerReservation")
        .def_readwrite("NetId", &FPlayerReservation::NetId)
        .def_readwrite("Skill", &FPlayerReservation::Skill)
        .def_readwrite("XpLevel", &FPlayerReservation::XpLevel)
        .def_readwrite("Mu", &FPlayerReservation::Mu)
        .def_readwrite("Sigma", &FPlayerReservation::Sigma)
        .def_readwrite("ElapsedSessionTime", &FPlayerReservation::ElapsedSessionTime)
  ;
}