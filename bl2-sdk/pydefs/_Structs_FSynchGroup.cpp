#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSynchGroup()
{
    class_< FSynchGroup >("FSynchGroup", no_init)
        .def_readwrite("SeqNodes", &FSynchGroup::SeqNodes)
        .def_readwrite("MasterNode", &FSynchGroup::MasterNode)
        .def_readwrite("GroupName", &FSynchGroup::GroupName)
        .def_readwrite("RateScale", &FSynchGroup::RateScale)
  ;
}