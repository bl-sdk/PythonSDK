#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PostProcessChain(py::module &m)
{
    py::class_< UBehavior_PostProcessChain,  UBehaviorBase   >(m, "UBehavior_PostProcessChain")
        .def_readwrite("MaterialEffectModifiers", &UBehavior_PostProcessChain::MaterialEffectModifiers)
        .def_readwrite("Action", &UBehavior_PostProcessChain::Action)
        .def_readwrite("Chain", &UBehavior_PostProcessChain::Chain)
        .def_readwrite("DOFEffectModifier", &UBehavior_PostProcessChain::DOFEffectModifier)
        .def("ApplyBehaviorToContext", &UBehavior_PostProcessChain::ApplyBehaviorToContext)
          ;
}