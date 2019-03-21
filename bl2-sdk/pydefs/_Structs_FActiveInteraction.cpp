#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FActiveInteraction()
{
    class_< FActiveInteraction >("FActiveInteraction", no_init)
        .def_readwrite("TimeLength", &FActiveInteraction::TimeLength)
        .def_readwrite("TimeRemaining", &FActiveInteraction::TimeRemaining)
        .def_readwrite("InteractionServer", &FActiveInteraction::InteractionServer)
        .def_readwrite("Players", &FActiveInteraction::Players)
        .def_readwrite("Instigator", &FActiveInteraction::Instigator)
  ;
}