#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UReceivedCreditsMessage()
{
    py::class_< UReceivedCreditsMessage,  UWillowLocalMessage   >("UReceivedCreditsMessage")
        .def_readwrite("ReceivedCredits", &UReceivedCreditsMessage::ReceivedCredits)
        .def_readwrite("SelfReceivedCredits", &UReceivedCreditsMessage::SelfReceivedCredits)
        .def_readwrite("NumberOfCredits", &UReceivedCreditsMessage::NumberOfCredits)
        .def_readwrite("OneCredit", &UReceivedCreditsMessage::OneCredit)
        .def_readwrite("MoreCredits", &UReceivedCreditsMessage::MoreCredits)
        .def_readwrite("CreditsFakedRarityLevelForItemColor", &UReceivedCreditsMessage::CreditsFakedRarityLevelForItemColor)
        .def("StaticClass", &UReceivedCreditsMessage::StaticClass, py::return_value_policy::reference)
        .def("GetCreditsColor", &UReceivedCreditsMessage::GetCreditsColor)
        .def("GetNumberOfCreditsString", &UReceivedCreditsMessage::GetNumberOfCreditsString)
        .def("GetCreditString", &UReceivedCreditsMessage::GetCreditString)
        .def("ClientCreditReceive", &UReceivedCreditsMessage::ClientCreditReceive)
        .staticmethod("StaticClass")
  ;
}