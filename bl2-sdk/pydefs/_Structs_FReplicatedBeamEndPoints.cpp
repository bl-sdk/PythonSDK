#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReplicatedBeamEndPoints()
{
    class_< FReplicatedBeamEndPoints >("FReplicatedBeamEndPoints", no_init)
        .def_readwrite("StartPoint", &FReplicatedBeamEndPoints::StartPoint)
        .def_readwrite("EndPoint", &FReplicatedBeamEndPoints::EndPoint)
  ;
}