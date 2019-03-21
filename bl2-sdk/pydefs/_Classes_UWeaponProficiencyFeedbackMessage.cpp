#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWeaponProficiencyFeedbackMessage()
{
    class_< UWeaponProficiencyFeedbackMessage, bases< ULocalMessage >  , boost::noncopyable>("UWeaponProficiencyFeedbackMessage", no_init)
        .def_readwrite("IsNowLevel", &UWeaponProficiencyFeedbackMessage::IsNowLevel)
        .def("StaticClass", &UWeaponProficiencyFeedbackMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetMsgType", &UWeaponProficiencyFeedbackMessage::GetMsgType)
        .def("GetString", &UWeaponProficiencyFeedbackMessage::GetString)
        .staticmethod("StaticClass")
  ;
}