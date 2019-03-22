#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UICustomizable(py::module &m)
{
    py::class_< UICustomizable,  UInterface   >(m, "UICustomizable")
        .def("StaticClass", &UICustomizable::StaticClass, py::return_value_policy::reference)
        .def("AllowFallbackToDefaultCustomizations", &UICustomizable::AllowFallbackToDefaultCustomizations)
        .def("RefreshCustomizationsOnInstanceData", &UICustomizable::RefreshCustomizationsOnInstanceData)
        .def("GetCustomizableName", &UICustomizable::GetCustomizableName)
        .def("GetDesiredCustomizationOfType", &UICustomizable::GetDesiredCustomizationOfType, py::return_value_policy::reference)
        .def("CustomizationApplied", &UICustomizable::CustomizationApplied)
        .def("GetCustomizableInstanceDataSets", &UICustomizable::GetCustomizableInstanceDataSets)
          ;
}