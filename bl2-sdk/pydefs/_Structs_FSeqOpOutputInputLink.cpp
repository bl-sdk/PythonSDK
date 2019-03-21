#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSeqOpOutputInputLink()
{
    class_< FSeqOpOutputInputLink >("FSeqOpOutputInputLink", no_init)
        .def_readwrite("LinkedOp", &FSeqOpOutputInputLink::LinkedOp)
        .def_readwrite("InputLinkIdx", &FSeqOpOutputInputLink::InputLinkIdx)
  ;
}