#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInstanceDataHelper()
{
    class_< UInstanceDataHelper, bases< UObject >  , boost::noncopyable>("UInstanceDataHelper", no_init)
        .def("StaticClass", &UInstanceDataHelper::StaticClass, return_value_policy< reference_existing_object >())
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
        .def("GetFirstInstanceDataObject", &UInstanceDataHelper::GetFirstInstanceDataObject, return_value_policy< reference_existing_object >())
        .def("GetAllInstanceDataObjects", &UInstanceDataHelper::GetAllInstanceDataObjects)
        .def("ApplyReplicatedInstanceDataState", &UInstanceDataHelper::ApplyReplicatedInstanceDataState)
        .def("DestroyInstanceDataAtIndex", &UInstanceDataHelper::DestroyInstanceDataAtIndex)
        .def("UpdateBodyComposition", &UInstanceDataHelper::UpdateBodyComposition)
        .def("InitializeBodyComposition", &UInstanceDataHelper::InitializeBodyComposition)
        .staticmethod("StaticClass")
  ;
}