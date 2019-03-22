#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIBodyCompositionInstance(py::module &m)
{
    py::class_< UIBodyCompositionInstance,  UInterface   >(m, "UIBodyCompositionInstance")
        .def("StaticClass", &UIBodyCompositionInstance::StaticClass, py::return_value_policy::reference)
        .def("ClearBodyCompositionInstance", &UIBodyCompositionInstance::ClearBodyCompositionInstance)
        .def("ApplyPreviewBodyComposition", &UIBodyCompositionInstance::ApplyPreviewBodyComposition)
        .def("GetBodyInfoProvider", &UIBodyCompositionInstance::GetBodyInfoProvider, py::return_value_policy::reference)
        .def("ChangeInstanceDataSwitch", &UIBodyCompositionInstance::ChangeInstanceDataSwitch)
        .def("PostInitBodyComposition", &UIBodyCompositionInstance::PostInitBodyComposition)
        .def("PreRemoveBodyComposition", &UIBodyCompositionInstance::PreRemoveBodyComposition)
          ;
}