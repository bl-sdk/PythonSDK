#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAnimGroup()
{
    class_< FAnimGroup >("FAnimGroup", no_init)
        .def_readwrite("SeqNodes", &FAnimGroup::SeqNodes)
        .def_readwrite("SynchMaster", &FAnimGroup::SynchMaster)
        .def_readwrite("NotifyMaster", &FAnimGroup::NotifyMaster)
        .def_readwrite("GroupName", &FAnimGroup::GroupName)
        .def_readwrite("RateScale", &FAnimGroup::RateScale)
        .def_readwrite("SynchPctPosition", &FAnimGroup::SynchPctPosition)
  ;
}