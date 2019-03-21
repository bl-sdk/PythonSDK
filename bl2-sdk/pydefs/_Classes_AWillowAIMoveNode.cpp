#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowAIMoveNode()
{
    py::class_< AWillowAIMoveNode,  AGearboxAIMoveNode   >("AWillowAIMoveNode")
        .def_readwrite("VfTable_IInterface_NavigationHandle", &AWillowAIMoveNode::VfTable_IInterface_NavigationHandle)
        .def_readwrite("PawnArrivalRadius", &AWillowAIMoveNode::PawnArrivalRadius)
        .def_readwrite("AISpeedPercentageHere", &AWillowAIMoveNode::AISpeedPercentageHere)
        .def_readwrite("VehicleNodeType", &AWillowAIMoveNode::VehicleNodeType)
        .def("StaticClass", &AWillowAIMoveNode::StaticClass, py::return_value_policy::reference)
        .def("eventNotifyPathChanged", &AWillowAIMoveNode::eventNotifyPathChanged)
        .staticmethod("StaticClass")
  ;
}