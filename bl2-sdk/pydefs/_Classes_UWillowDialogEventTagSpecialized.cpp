#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogEventTagSpecialized(py::module &m)
{
    py::class_< UWillowDialogEventTagSpecialized,  UWillowDialogEventTag   >(m, "UWillowDialogEventTagSpecialized")
		.def_static("StaticClass", &UWillowDialogEventTagSpecialized::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SpecializationOfEventTag", &UWillowDialogEventTagSpecialized::SpecializationOfEventTag)
        .def_readwrite("SpecializationForOtherNameTags", &UWillowDialogEventTagSpecialized::SpecializationForOtherNameTags)
          ;
}