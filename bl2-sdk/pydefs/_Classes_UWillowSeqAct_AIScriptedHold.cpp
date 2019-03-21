#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AIScriptedHold()
{
    py::class_< UWillowSeqAct_AIScriptedHold,  USequenceAction   >("UWillowSeqAct_AIScriptedHold")
        .def_readwrite("Option", &UWillowSeqAct_AIScriptedHold::Option)
        .def("StaticClass", &UWillowSeqAct_AIScriptedHold::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}