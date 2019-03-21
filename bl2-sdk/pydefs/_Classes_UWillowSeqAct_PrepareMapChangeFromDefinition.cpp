#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_PrepareMapChangeFromDefinition()
{
    py::class_< UWillowSeqAct_PrepareMapChangeFromDefinition,  USeqAct_PrepareMapChange   >("UWillowSeqAct_PrepareMapChangeFromDefinition")
        .def_readwrite("DefaultMap", &UWillowSeqAct_PrepareMapChangeFromDefinition::DefaultMap)
        .def("StaticClass", &UWillowSeqAct_PrepareMapChangeFromDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetPersistentMap", &UWillowSeqAct_PrepareMapChangeFromDefinition::GetPersistentMap)
        .def("SetPersistentMap", &UWillowSeqAct_PrepareMapChangeFromDefinition::SetPersistentMap)
        .staticmethod("StaticClass")
  ;
}