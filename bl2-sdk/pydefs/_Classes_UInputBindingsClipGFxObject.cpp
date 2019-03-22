#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInputBindingsClipGFxObject(py::module &m)
{
    py::class_< UInputBindingsClipGFxObject,  UGFxObject   >(m, "UInputBindingsClipGFxObject")
        .def("SetCustomizeTip", &UInputBindingsClipGFxObject::SetCustomizeTip)
        .def("AddKeyData", &UInputBindingsClipGFxObject::AddKeyData, py::return_value_policy::reference)
        .def("EmptyKeyData", &UInputBindingsClipGFxObject::EmptyKeyData)
        .def("InvalidateKeyData", &UInputBindingsClipGFxObject::InvalidateKeyData)
        .def("SetKeybindMode", &UInputBindingsClipGFxObject::SetKeybindMode)
        .def("SetControllerMode", &UInputBindingsClipGFxObject::SetControllerMode)
        .def("_SetVisible", &UInputBindingsClipGFxObject::_SetVisible)
        .def("Hide", &UInputBindingsClipGFxObject::Hide)
        .def("Show", &UInputBindingsClipGFxObject::Show)
          ;
}