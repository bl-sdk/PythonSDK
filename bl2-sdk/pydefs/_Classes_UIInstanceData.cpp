#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIInstanceData()
{
    py::class_< UIInstanceData,  UInterface   >("UIInstanceData")
        .def("StaticClass", &UIInstanceData::StaticClass, py::return_value_policy::reference)
        .def("GetReplicatedInstanceDataState", &UIInstanceData::GetReplicatedInstanceDataState)
        .def("GetInstanceDataState", &UIInstanceData::GetInstanceDataState)
        .def("DestroyOwnedInstanceData", &UIInstanceData::DestroyOwnedInstanceData)
        .def("eventRemoveInstanceDataObject", &UIInstanceData::eventRemoveInstanceDataObject)
        .def("eventRemoveInstanceData", &UIInstanceData::eventRemoveInstanceData)
        .def("eventGetInstanceData", &UIInstanceData::eventGetInstanceData)
        .def("SetInstanceData", &UIInstanceData::SetInstanceData)
        .staticmethod("StaticClass")
  ;
}