#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSeqOpOutputLink()
{
    class_< FSeqOpOutputLink >("FSeqOpOutputLink", no_init)
        .def_readwrite("Links", &FSeqOpOutputLink::Links)
        .def_readwrite("LinkDesc", &FSeqOpOutputLink::LinkDesc)
        .def_readwrite("LinkedOp", &FSeqOpOutputLink::LinkedOp)
        .def_readwrite("ActivateDelay", &FSeqOpOutputLink::ActivateDelay)
  ;
}