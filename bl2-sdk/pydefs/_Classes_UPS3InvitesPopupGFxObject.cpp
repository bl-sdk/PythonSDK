#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPS3InvitesPopupGFxObject(py::module &m)
{
    py::class_< UPS3InvitesPopupGFxObject,  UGFxObject   >(m, "UPS3InvitesPopupGFxObject")
        .def("StaticClass", &UPS3InvitesPopupGFxObject::StaticClass, py::return_value_policy::reference)
        .def("Hide", &UPS3InvitesPopupGFxObject::Hide)
        .def("Show", &UPS3InvitesPopupGFxObject::Show)
        .def("Refresh", &UPS3InvitesPopupGFxObject::Refresh)
        .def("SelectionDown", &UPS3InvitesPopupGFxObject::SelectionDown)
        .def("SelectionUp", &UPS3InvitesPopupGFxObject::SelectionUp)
        .def("SetSelectedInviteIndex", &UPS3InvitesPopupGFxObject::SetSelectedInviteIndex)
        .def("GetSelectedInviteIndex", &UPS3InvitesPopupGFxObject::GetSelectedInviteIndex)
        .def("ClearInvites", &UPS3InvitesPopupGFxObject::ClearInvites)
        .def("AddInvite", &UPS3InvitesPopupGFxObject::AddInvite)
          ;
}