#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPostProcessChainRecord(py::module &m)
{
    py::class_< FPostProcessChainRecord >(m, "FPostProcessChainRecord")
        .def_readwrite("Template", &FPostProcessChainRecord::Template)
        .def_readwrite("Instance", &FPostProcessChainRecord::Instance)
        .def_readwrite("AppliedModifiers", &FPostProcessChainRecord::AppliedModifiers)
        .def_readwrite("DOFEffectModifier", &FPostProcessChainRecord::DOFEffectModifier)
        .def_readwrite("NextDOFUpdateTime", &FPostProcessChainRecord::NextDOFUpdateTime)
  ;
}