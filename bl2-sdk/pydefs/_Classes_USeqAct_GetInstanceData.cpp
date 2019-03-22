#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_GetInstanceData(py::module &m)
{
    py::class_< USeqAct_GetInstanceData,  USequenceAction   >(m, "USeqAct_GetInstanceData")
        .def_readwrite("InstanceDataName", &USeqAct_GetInstanceData::InstanceDataName)
        .def_readwrite("InObject", &USeqAct_GetInstanceData::InObject)
        .def_readwrite("OutObject", &USeqAct_GetInstanceData::OutObject)
        .def("eventActivated", &USeqAct_GetInstanceData::eventActivated)
          ;
}