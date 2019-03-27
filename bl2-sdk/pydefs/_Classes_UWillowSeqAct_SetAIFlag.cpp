#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_SetAIFlag(py::module &m)
{
    py::class_< UWillowSeqAct_SetAIFlag,  USequenceAction   >(m, "UWillowSeqAct_SetAIFlag")
		.def_static("StaticClass", &UWillowSeqAct_SetAIFlag::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FlagDefinition", &UWillowSeqAct_SetAIFlag::FlagDefinition)
          ;
}