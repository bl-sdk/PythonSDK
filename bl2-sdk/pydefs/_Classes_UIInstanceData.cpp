#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIInstanceData(py::module &m)
{
    py::class_< UIInstanceData,  UInterface   >(m, "UIInstanceData")
        .def("GetReplicatedInstanceDataState", &UIInstanceData::GetReplicatedInstanceDataState)
        .def("GetInstanceDataState", &UIInstanceData::GetInstanceDataState)
        .def("DestroyOwnedInstanceData", &UIInstanceData::DestroyOwnedInstanceData)
        .def("eventRemoveInstanceDataObject", &UIInstanceData::eventRemoveInstanceDataObject)
        .def("eventRemoveInstanceData", &UIInstanceData::eventRemoveInstanceData)
        .def("eventGetInstanceData", &UIInstanceData::eventGetInstanceData)
        .def("SetInstanceData", &UIInstanceData::SetInstanceData)
          ;
}