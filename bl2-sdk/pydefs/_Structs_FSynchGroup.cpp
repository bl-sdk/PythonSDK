#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSynchGroup()
{
    py::class_< FSynchGroup >("FSynchGroup")
        .def_readwrite("SeqNodes", &FSynchGroup::SeqNodes)
        .def_readwrite("MasterNode", &FSynchGroup::MasterNode)
        .def_readwrite("GroupName", &FSynchGroup::GroupName)
        .def_readwrite("RateScale", &FSynchGroup::RateScale)
  ;
}