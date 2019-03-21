#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedBeamEndPoints()
{
    py::class_< FReplicatedBeamEndPoints >("FReplicatedBeamEndPoints")
        .def_readwrite("StartPoint", &FReplicatedBeamEndPoints::StartPoint)
        .def_readwrite("EndPoint", &FReplicatedBeamEndPoints::EndPoint)
  ;
}