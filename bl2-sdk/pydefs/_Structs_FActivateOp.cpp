#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FActivateOp()
{
    class_< FActivateOp >("FActivateOp", no_init)
        .def_readwrite("ActivatorOp", &FActivateOp::ActivatorOp)
        .def_readwrite("Op", &FActivateOp::Op)
        .def_readwrite("InputIdx", &FActivateOp::InputIdx)
        .def_readwrite("RemainingDelay", &FActivateOp::RemainingDelay)
  ;
}