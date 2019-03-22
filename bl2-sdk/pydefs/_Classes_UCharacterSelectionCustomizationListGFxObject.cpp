#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCharacterSelectionCustomizationListGFxObject(py::module &m)
{
    py::class_< UCharacterSelectionCustomizationListGFxObject,  UGFxObject   >(m, "UCharacterSelectionCustomizationListGFxObject")
        .def("StaticClass", &UCharacterSelectionCustomizationListGFxObject::StaticClass, py::return_value_policy::reference)
        .def("ScrollDown", &UCharacterSelectionCustomizationListGFxObject::ScrollDown)
        .def("ScrollUp", &UCharacterSelectionCustomizationListGFxObject::ScrollUp)
        .def("PopulateScrollingList", &UCharacterSelectionCustomizationListGFxObject::PopulateScrollingList)
        .def("GetSelectedIndex", &UCharacterSelectionCustomizationListGFxObject::GetSelectedIndex)
          ;
}