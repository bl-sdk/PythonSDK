#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_SetAIFlag()
{
    py::class_< UWillowSeqAct_SetAIFlag,  USequenceAction   >("UWillowSeqAct_SetAIFlag")
        .def_readwrite("FlagDefinition", &UWillowSeqAct_SetAIFlag::FlagDefinition)
        .def("StaticClass", &UWillowSeqAct_SetAIFlag::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}