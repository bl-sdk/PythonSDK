#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActivateOp()
{
    py::class_< FActivateOp >("FActivateOp")
        .def_readwrite("ActivatorOp", &FActivateOp::ActivatorOp)
        .def_readwrite("Op", &FActivateOp::Op)
        .def_readwrite("InputIdx", &FActivateOp::InputIdx)
        .def_readwrite("RemainingDelay", &FActivateOp::RemainingDelay)
  ;
}