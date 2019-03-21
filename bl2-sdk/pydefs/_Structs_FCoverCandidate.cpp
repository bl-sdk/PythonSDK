#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoverCandidate()
{
    class_< FCoverCandidate >("FCoverCandidate", no_init)
        .def_readwrite("TheCoverActor", &FCoverCandidate::TheCoverActor)
        .def_readwrite("SlotNdx", &FCoverCandidate::SlotNdx)
        .def_readwrite("Score", &FCoverCandidate::Score)
  ;
}