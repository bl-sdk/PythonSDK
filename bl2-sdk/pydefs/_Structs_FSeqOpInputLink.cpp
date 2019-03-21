#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSeqOpInputLink()
{
    class_< FSeqOpInputLink >("FSeqOpInputLink", no_init)
        .def_readwrite("LinkDesc", &FSeqOpInputLink::LinkDesc)
        .def_readwrite("QueuedActivations", &FSeqOpInputLink::QueuedActivations)
        .def_readwrite("LinkedOp", &FSeqOpInputLink::LinkedOp)
        .def_readwrite("ActivateDelay", &FSeqOpInputLink::ActivateDelay)
  ;
}