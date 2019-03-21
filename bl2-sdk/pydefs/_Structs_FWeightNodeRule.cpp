#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWeightNodeRule()
{
    class_< FWeightNodeRule >("FWeightNodeRule", no_init)
        .def_readwrite("NodeName", &FWeightNodeRule::NodeName)
        .def_readwrite("CachedNode", &FWeightNodeRule::CachedNode)
        .def_readwrite("CachedSlotNode", &FWeightNodeRule::CachedSlotNode)
        .def_readwrite("WeightCheck", &FWeightNodeRule::WeightCheck)
        .def_readwrite("ChildIndex", &FWeightNodeRule::ChildIndex)
  ;
}