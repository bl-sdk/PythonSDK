#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxAccountGFxObject()
{
    class_< UGearboxAccountGFxObject, bases< UGFxObject >  , boost::noncopyable>("UGearboxAccountGFxObject", no_init)
        .def("StaticClass", &UGearboxAccountGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("SelectIsEnabled", &UGearboxAccountGFxObject::SelectIsEnabled)
        .def("ClearKeyCode", &UGearboxAccountGFxObject::ClearKeyCode)
        .def("TrySetKeyCode", &UGearboxAccountGFxObject::TrySetKeyCode)
        .def("ConfigureForViewOffers", &UGearboxAccountGFxObject::ConfigureForViewOffers)
        .def("ConfigureForRedeemCode", &UGearboxAccountGFxObject::ConfigureForRedeemCode)
        .def("IsDisplayingOffers", &UGearboxAccountGFxObject::IsDisplayingOffers)
        .def("SetOfferData", &UGearboxAccountGFxObject::SetOfferData)
        .def("ScrollMessageDown", &UGearboxAccountGFxObject::ScrollMessageDown)
        .def("ScrollMessageUp", &UGearboxAccountGFxObject::ScrollMessageUp)
        .def("HasReadTermsOfService", &UGearboxAccountGFxObject::HasReadTermsOfService)
        .def("SetTermsOfService", &UGearboxAccountGFxObject::SetTermsOfService)
        .def("HasReadPrivacyPolicy", &UGearboxAccountGFxObject::HasReadPrivacyPolicy)
        .def("SetPrivacyPolicy", &UGearboxAccountGFxObject::SetPrivacyPolicy)
        .def("SetTooltips", &UGearboxAccountGFxObject::SetTooltips)
        .def("SetSignInStatus", &UGearboxAccountGFxObject::SetSignInStatus)
        .def("SetPlayerName", &UGearboxAccountGFxObject::SetPlayerName)
        .def("SetFocusedConsoleCodeSegment", &UGearboxAccountGFxObject::SetFocusedConsoleCodeSegment)
        .def("SetConfirmPassword", &UGearboxAccountGFxObject::SetConfirmPassword)
        .def("SetPassword", &UGearboxAccountGFxObject::SetPassword)
        .def("SetEmail", &UGearboxAccountGFxObject::SetEmail)
        .def("GetConfirmPassword", &UGearboxAccountGFxObject::GetConfirmPassword)
        .def("GetPassword", &UGearboxAccountGFxObject::GetPassword)
        .def("GetKeyCode", &UGearboxAccountGFxObject::GetKeyCode)
        .def("GetEmail", &UGearboxAccountGFxObject::GetEmail)
        .def("GetAgeYear", &UGearboxAccountGFxObject::GetAgeYear)
        .def("GetAgeDay", &UGearboxAccountGFxObject::GetAgeDay)
        .def("GetAgeMonth", &UGearboxAccountGFxObject::GetAgeMonth)
        .def("SetCurrentDate", &UGearboxAccountGFxObject::SetCurrentDate)
        .def("OffersBoxIsChecked", &UGearboxAccountGFxObject::OffersBoxIsChecked)
        .def("RefreshWelcomeScreen", &UGearboxAccountGFxObject::RefreshWelcomeScreen)
        .def("DisplayScreen", &UGearboxAccountGFxObject::DisplayScreen)
        .staticmethod("StaticClass")
  ;
}