#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInstanceDataHelper(py::object m)
{
    py::class_< UInstanceDataHelper,  UObject   >(m, "UInstanceDataHelper")
        .def("StaticClass", &UInstanceDataHelper::StaticClass, py::return_value_policy::reference)
        .def("DestroyOwnedInstanceData", &UInstanceDataHelper::DestroyOwnedInstanceData)
        .def("ForceDetachDelegate", &UInstanceDataHelper::ForceDetachDelegate)
        .def("TickInstanceDataAttachment", &UInstanceDataHelper::TickInstanceDataAttachment)
        .def("HACK_FirstPersonMeshAttachment", &UInstanceDataHelper::HACK_FirstPersonMeshAttachment)
        .def("SetBodyInstanceDataRemovalState", &UInstanceDataHelper::SetBodyInstanceDataRemovalState)
        .def("RemoveInstanceDataObject", &UInstanceDataHelper::RemoveInstanceDataObject)
        .def("RemoveInstanceDataState", &UInstanceDataHelper::RemoveInstanceDataState)
        .def("GetInstanceDataNameForObject", &UInstanceDataHelper::GetInstanceDataNameForObject)
        .def("GetInstanceDataNameForComponent", &UInstanceDataHelper::GetInstanceDataNameForComponent)
        .def("GetInstanceDataState", &UInstanceDataHelper::GetInstanceDataState)
        .def("SetInstanceDataState", &UInstanceDataHelper::SetInstanceDataState)
        .def("GetFirstInstanceDataObject", &UInstanceDataHelper::GetFirstInstanceDataObject, py::return_value_policy::reference)
        .def("GetAllInstanceDataObjects", &UInstanceDataHelper::GetAllInstanceDataObjects)
        .def("ApplyReplicatedInstanceDataState", &UInstanceDataHelper::ApplyReplicatedInstanceDataState)
        .def("DestroyInstanceDataAtIndex", &UInstanceDataHelper::DestroyInstanceDataAtIndex)
        .def("UpdateBodyComposition", &UInstanceDataHelper::UpdateBodyComposition)
        .def("InitializeBodyComposition", &UInstanceDataHelper::InitializeBodyComposition)
          ;
}