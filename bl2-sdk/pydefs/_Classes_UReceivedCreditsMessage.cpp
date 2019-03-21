#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UReceivedCreditsMessage()
{
    class_< UReceivedCreditsMessage, bases< UWillowLocalMessage >  , boost::noncopyable>("UReceivedCreditsMessage", no_init)
        .def_readwrite("ReceivedCredits", &UReceivedCreditsMessage::ReceivedCredits)
        .def_readwrite("SelfReceivedCredits", &UReceivedCreditsMessage::SelfReceivedCredits)
        .def_readwrite("NumberOfCredits", &UReceivedCreditsMessage::NumberOfCredits)
        .def_readwrite("OneCredit", &UReceivedCreditsMessage::OneCredit)
        .def_readwrite("MoreCredits", &UReceivedCreditsMessage::MoreCredits)
        .def_readwrite("CreditsFakedRarityLevelForItemColor", &UReceivedCreditsMessage::CreditsFakedRarityLevelForItemColor)
        .def("StaticClass", &UReceivedCreditsMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetCreditsColor", &UReceivedCreditsMessage::GetCreditsColor)
        .def("GetNumberOfCreditsString", &UReceivedCreditsMessage::GetNumberOfCreditsString)
        .def("GetCreditString", &UReceivedCreditsMessage::GetCreditString)
        .def("ClientCreditReceive", &UReceivedCreditsMessage::ClientCreditReceive)
        .staticmethod("StaticClass")
  ;
}