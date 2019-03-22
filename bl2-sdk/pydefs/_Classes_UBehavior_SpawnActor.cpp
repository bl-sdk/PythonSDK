#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnActor(py::module &m)
{
    py::class_< UBehavior_SpawnActor,  UBehaviorBase   >(m, "UBehavior_SpawnActor")
        .def_readwrite("SavedReferenceName", &UBehavior_SpawnActor::SavedReferenceName)
        .def_readwrite("InstanceDataContext", &UBehavior_SpawnActor::InstanceDataContext)
        .def_readwrite("ActorTemplate", &UBehavior_SpawnActor::ActorTemplate)
        .def_readwrite("AttachmentPointName", &UBehavior_SpawnActor::AttachmentPointName)
        .def_readwrite("RelativeLocation", &UBehavior_SpawnActor::RelativeLocation)
        .def_readwrite("RelativeRotation", &UBehavior_SpawnActor::RelativeRotation)
        .def_readwrite("SpawnDirection", &UBehavior_SpawnActor::SpawnDirection)
        .def("StaticClass", &UBehavior_SpawnActor::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnActor::ApplyBehaviorToContext)
          ;
}