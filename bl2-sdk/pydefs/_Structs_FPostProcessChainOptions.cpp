#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPostProcessChainOptions(py::module &m)
{
    py::class_< FPostProcessChainOptions >(m, "FPostProcessChainOptions")
        .def_readwrite("MaterialEffectModifiers", &FPostProcessChainOptions::MaterialEffectModifiers)
        .def_readwrite("DOFEffectModifier", &FPostProcessChainOptions::DOFEffectModifier)
  ;
}