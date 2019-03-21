#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInteractiveObjectReplicatedStateData(py::object m)
{
    py::class_< FInteractiveObjectReplicatedStateData >(m, "FInteractiveObjectReplicatedStateData")
        .def_readwrite("ReplicatedBehaviorConsumerState", &FInteractiveObjectReplicatedStateData::ReplicatedBehaviorConsumerState)
        .def_readwrite("ReplicatedInstanceDataState", &FInteractiveObjectReplicatedStateData::ReplicatedInstanceDataState)
  ;
}