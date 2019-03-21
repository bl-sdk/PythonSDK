#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSeqOpInputLink()
{
    py::class_< FSeqOpInputLink >("FSeqOpInputLink")
        .def_readwrite("LinkDesc", &FSeqOpInputLink::LinkDesc)
        .def_readwrite("QueuedActivations", &FSeqOpInputLink::QueuedActivations)
        .def_readwrite("LinkedOp", &FSeqOpInputLink::LinkedOp)
        .def_readwrite("ActivateDelay", &FSeqOpInputLink::ActivateDelay)
  ;
}