#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimGroup()
{
    py::class_< FAnimGroup >("FAnimGroup")
        .def_readwrite("SeqNodes", &FAnimGroup::SeqNodes)
        .def_readwrite("SynchMaster", &FAnimGroup::SynchMaster)
        .def_readwrite("NotifyMaster", &FAnimGroup::NotifyMaster)
        .def_readwrite("GroupName", &FAnimGroup::GroupName)
        .def_readwrite("RateScale", &FAnimGroup::RateScale)
        .def_readwrite("SynchPctPosition", &FAnimGroup::SynchPctPosition)
  ;
}