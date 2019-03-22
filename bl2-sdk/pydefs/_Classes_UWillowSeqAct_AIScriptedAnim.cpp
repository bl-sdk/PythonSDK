#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AIScriptedAnim(py::module &m)
{
    py::class_< UWillowSeqAct_AIScriptedAnim,  USeqAct_Latent   >(m, "UWillowSeqAct_AIScriptedAnim")
        .def_readwrite("Anim", &UWillowSeqAct_AIScriptedAnim::Anim)
        .def_readwrite("EditInlineAnim", &UWillowSeqAct_AIScriptedAnim::EditInlineAnim)
        .def("StaticClass", &UWillowSeqAct_AIScriptedAnim::StaticClass, py::return_value_policy::reference)
        .def("GetAnim", &UWillowSeqAct_AIScriptedAnim::GetAnim, py::return_value_policy::reference)
          ;
}