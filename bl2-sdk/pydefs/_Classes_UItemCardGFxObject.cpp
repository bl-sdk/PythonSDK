#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemCardGFxObject(py::object m)
{
    py::class_< UItemCardGFxObject,  UGFxObject   >(m, "UItemCardGFxObject")
        .def("StaticClass", &UItemCardGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetVisible_", &UItemCardGFxObject::SetVisible_)
        .def("SetBackgroundStyle", &UItemCardGFxObject::SetBackgroundStyle)
        .def("SetCardUIStats", &UItemCardGFxObject::SetCardUIStats)
        .def("AdjustHeight", &UItemCardGFxObject::AdjustHeight)
        .def("SetHeight", &UItemCardGFxObject::SetHeight)
        .def("SetLevelRequirement", &UItemCardGFxObject::SetLevelRequirement)
        .def("ToggleCreditsSpinner", &UItemCardGFxObject::ToggleCreditsSpinner)
        .def("SetEridiumValue", &UItemCardGFxObject::SetEridiumValue)
        .def("SetValue", &UItemCardGFxObject::SetValue)
        .def("SetFunStats", &UItemCardGFxObject::SetFunStats)
        .def("SetTopStat", &UItemCardGFxObject::SetTopStat)
        .def("SetTitle", &UItemCardGFxObject::SetTitle)
        .def("SetItemCardEx", &UItemCardGFxObject::SetItemCardEx)
        .def("eventSetItemCard", &UItemCardGFxObject::eventSetItemCard)
        .def("Init", &UItemCardGFxObject::Init)
          ;
}