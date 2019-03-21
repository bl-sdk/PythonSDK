#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogEventTagSpecialized()
{
    py::class_< UWillowDialogEventTagSpecialized,  UWillowDialogEventTag   >("UWillowDialogEventTagSpecialized")
        .def_readwrite("SpecializationOfEventTag", &UWillowDialogEventTagSpecialized::SpecializationOfEventTag)
        .def_readwrite("SpecializationForOtherNameTags", &UWillowDialogEventTagSpecialized::SpecializationForOtherNameTags)
        .def("StaticClass", &UWillowDialogEventTagSpecialized::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}