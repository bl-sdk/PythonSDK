#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedBeamEndPoints(py::object m)
{
    py::class_< FReplicatedBeamEndPoints >(m, "FReplicatedBeamEndPoints")
        .def_readwrite("StartPoint", &FReplicatedBeamEndPoints::StartPoint)
        .def_readwrite("EndPoint", &FReplicatedBeamEndPoints::EndPoint)
  ;
}