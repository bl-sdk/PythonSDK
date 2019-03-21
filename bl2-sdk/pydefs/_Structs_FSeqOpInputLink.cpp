#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSeqOpInputLink(py::object m)
{
    py::class_< FSeqOpInputLink >(m, "FSeqOpInputLink")
        .def_readwrite("LinkDesc", &FSeqOpInputLink::LinkDesc)
        .def_readwrite("QueuedActivations", &FSeqOpInputLink::QueuedActivations)
        .def_readwrite("LinkedOp", &FSeqOpInputLink::LinkedOp)
        .def_readwrite("ActivateDelay", &FSeqOpInputLink::ActivateDelay)
  ;
}