#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowAIMoveNode()
{
    class_< AWillowAIMoveNode, bases< AGearboxAIMoveNode >  , boost::noncopyable>("AWillowAIMoveNode", no_init)
        .def_readwrite("VfTable_IInterface_NavigationHandle", &AWillowAIMoveNode::VfTable_IInterface_NavigationHandle)
        .def_readwrite("PawnArrivalRadius", &AWillowAIMoveNode::PawnArrivalRadius)
        .def_readwrite("AISpeedPercentageHere", &AWillowAIMoveNode::AISpeedPercentageHere)
        .def_readwrite("VehicleNodeType", &AWillowAIMoveNode::VehicleNodeType)
        .def("StaticClass", &AWillowAIMoveNode::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventNotifyPathChanged", &AWillowAIMoveNode::eventNotifyPathChanged)
        .staticmethod("StaticClass")
  ;
}