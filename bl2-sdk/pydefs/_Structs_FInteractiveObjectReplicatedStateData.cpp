#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInteractiveObjectReplicatedStateData()
{
    class_< FInteractiveObjectReplicatedStateData >("FInteractiveObjectReplicatedStateData", no_init)
        .def_readwrite("ReplicatedBehaviorConsumerState", &FInteractiveObjectReplicatedStateData::ReplicatedBehaviorConsumerState)
        .def_readwrite("ReplicatedInstanceDataState", &FInteractiveObjectReplicatedStateData::ReplicatedInstanceDataState)
  ;
}