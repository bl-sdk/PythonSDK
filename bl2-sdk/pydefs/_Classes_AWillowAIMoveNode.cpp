#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowAIMoveNode(py::module &m)
{
    py::class_< AWillowAIMoveNode,  AGearboxAIMoveNode   >(m, "AWillowAIMoveNode")
        .def_readwrite("VfTable_IInterface_NavigationHandle", &AWillowAIMoveNode::VfTable_IInterface_NavigationHandle)
        .def_readwrite("PawnArrivalRadius", &AWillowAIMoveNode::PawnArrivalRadius)
        .def_readwrite("AISpeedPercentageHere", &AWillowAIMoveNode::AISpeedPercentageHere)
        .def_readwrite("VehicleNodeType", &AWillowAIMoveNode::VehicleNodeType)
        .def("eventNotifyPathChanged", &AWillowAIMoveNode::eventNotifyPathChanged)
          ;
}