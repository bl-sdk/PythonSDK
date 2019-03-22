#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FViewTargetTransitionParams(py::module &m)
{
    py::class_< FViewTargetTransitionParams >(m, "FViewTargetTransitionParams")
        .def_readwrite("BlendTime", &FViewTargetTransitionParams::BlendTime)
        .def_readwrite("BlendFunction", &FViewTargetTransitionParams::BlendFunction)
        .def_readwrite("BlendExp", &FViewTargetTransitionParams::BlendExp)
  ;
}