#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnTemporalField(py::module &m)
{
    py::class_< UBehavior_SpawnTemporalField,  UBehaviorBase   >(m, "UBehavior_SpawnTemporalField")
        .def_readwrite("TemporalField", &UBehavior_SpawnTemporalField::TemporalField)
        .def_readwrite("LifeSpan", &UBehavior_SpawnTemporalField::LifeSpan)
        .def_readwrite("LocationContext", &UBehavior_SpawnTemporalField::LocationContext)
        .def_readwrite("AttachmentPointName", &UBehavior_SpawnTemporalField::AttachmentPointName)
        .def_readwrite("RelativeLocation", &UBehavior_SpawnTemporalField::RelativeLocation)
        .def_readwrite("RelativeRotation", &UBehavior_SpawnTemporalField::RelativeRotation)
        .def("GetAttachmentLocation", &UBehavior_SpawnTemporalField::GetAttachmentLocation)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnTemporalField::ApplyBehaviorToContext)
          ;
}