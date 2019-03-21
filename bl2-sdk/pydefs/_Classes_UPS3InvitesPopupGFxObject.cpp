#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPS3InvitesPopupGFxObject()
{
    class_< UPS3InvitesPopupGFxObject, bases< UGFxObject >  , boost::noncopyable>("UPS3InvitesPopupGFxObject", no_init)
        .def("StaticClass", &UPS3InvitesPopupGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("Hide", &UPS3InvitesPopupGFxObject::Hide)
        .def("Show", &UPS3InvitesPopupGFxObject::Show)
        .def("Refresh", &UPS3InvitesPopupGFxObject::Refresh)
        .def("SelectionDown", &UPS3InvitesPopupGFxObject::SelectionDown)
        .def("SelectionUp", &UPS3InvitesPopupGFxObject::SelectionUp)
        .def("SetSelectedInviteIndex", &UPS3InvitesPopupGFxObject::SetSelectedInviteIndex)
        .def("GetSelectedInviteIndex", &UPS3InvitesPopupGFxObject::GetSelectedInviteIndex)
        .def("ClearInvites", &UPS3InvitesPopupGFxObject::ClearInvites)
        .def("AddInvite", &UPS3InvitesPopupGFxObject::AddInvite)
        .staticmethod("StaticClass")
  ;
}