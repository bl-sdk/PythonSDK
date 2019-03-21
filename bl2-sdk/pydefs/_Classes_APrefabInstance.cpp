#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APrefabInstance(py::object m)
{
    py::class_< APrefabInstance,  AActor   >(m, "APrefabInstance")
        .def_readwrite("TemplatePrefab", &APrefabInstance::TemplatePrefab)
        .def_readwrite("TemplateVersion", &APrefabInstance::TemplateVersion)
        .def_readonly("UnknownData00", &APrefabInstance::UnknownData00)
        .def_readwrite("SequenceInstance", &APrefabInstance::SequenceInstance)
        .def_readwrite("PI_PackageVersion", &APrefabInstance::PI_PackageVersion)
        .def_readwrite("PI_LicenseePackageVersion", &APrefabInstance::PI_LicenseePackageVersion)
        .def_readwrite("PI_GamePackageVersion", &APrefabInstance::PI_GamePackageVersion)
        .def_readwrite("PI_Bytes", &APrefabInstance::PI_Bytes)
        .def_readwrite("PI_CompleteObjects", &APrefabInstance::PI_CompleteObjects)
        .def_readwrite("PI_ReferencedObjects", &APrefabInstance::PI_ReferencedObjects)
        .def_readwrite("PI_SavedNames", &APrefabInstance::PI_SavedNames)
        .def_readonly("UnknownData01", &APrefabInstance::UnknownData01)
        .def("StaticClass", &APrefabInstance::StaticClass, py::return_value_policy::reference)
          ;
}