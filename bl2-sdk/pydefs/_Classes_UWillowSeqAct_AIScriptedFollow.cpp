#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AIScriptedFollow(py::module &m)
{
    py::class_< UWillowSeqAct_AIScriptedFollow,  USequenceAction   >(m, "UWillowSeqAct_AIScriptedFollow")
        .def_readwrite("ToFollow", &UWillowSeqAct_AIScriptedFollow::ToFollow)
        .def_readwrite("Action", &UWillowSeqAct_AIScriptedFollow::Action)
        .def_readwrite("Stance", &UWillowSeqAct_AIScriptedFollow::Stance)
        .def_readwrite("CatchupDistance", &UWillowSeqAct_AIScriptedFollow::CatchupDistance)
        .def_readwrite("HoldStillDistance", &UWillowSeqAct_AIScriptedFollow::HoldStillDistance)
        .def("StaticClass", &UWillowSeqAct_AIScriptedFollow::StaticClass, py::return_value_policy::reference)
          ;
}