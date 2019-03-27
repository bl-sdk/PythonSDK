#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActiveInteraction(py::module &m)
{
    py::class_< FActiveInteraction >(m, "FActiveInteraction")
        .def_readwrite("TimeLength", &FActiveInteraction::TimeLength)
        .def_readwrite("TimeRemaining", &FActiveInteraction::TimeRemaining)
        .def_readwrite("InteractionServer", &FActiveInteraction::InteractionServer)
        .def_readwrite("Players", &FActiveInteraction::Players)
        .def_readwrite("Instigator", &FActiveInteraction::Instigator)
  ;
}