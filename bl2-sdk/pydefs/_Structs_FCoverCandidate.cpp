#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoverCandidate(py::module &m)
{
    py::class_< FCoverCandidate >(m, "FCoverCandidate")
        .def_readwrite("TheCoverActor", &FCoverCandidate::TheCoverActor)
        .def_readwrite("SlotNdx", &FCoverCandidate::SlotNdx)
        .def_readwrite("Score", &FCoverCandidate::Score)
  ;
}