#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActivateOp(py::module &m)
{
    py::class_< FActivateOp >(m, "FActivateOp")
        .def_readwrite("ActivatorOp", &FActivateOp::ActivatorOp)
        .def_readwrite("Op", &FActivateOp::Op)
        .def_readwrite("InputIdx", &FActivateOp::InputIdx)
        .def_readwrite("RemainingDelay", &FActivateOp::RemainingDelay)
  ;
}