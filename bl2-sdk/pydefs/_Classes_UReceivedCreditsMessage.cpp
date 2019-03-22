#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UReceivedCreditsMessage(py::module &m)
{
    py::class_< UReceivedCreditsMessage,  UWillowLocalMessage   >(m, "UReceivedCreditsMessage")
        .def_readwrite("ReceivedCredits", &UReceivedCreditsMessage::ReceivedCredits)
        .def_readwrite("SelfReceivedCredits", &UReceivedCreditsMessage::SelfReceivedCredits)
        .def_readwrite("NumberOfCredits", &UReceivedCreditsMessage::NumberOfCredits)
        .def_readwrite("OneCredit", &UReceivedCreditsMessage::OneCredit)
        .def_readwrite("MoreCredits", &UReceivedCreditsMessage::MoreCredits)
        .def_readwrite("CreditsFakedRarityLevelForItemColor", &UReceivedCreditsMessage::CreditsFakedRarityLevelForItemColor)
        .def("GetCreditsColor", &UReceivedCreditsMessage::GetCreditsColor)
        .def("GetNumberOfCreditsString", &UReceivedCreditsMessage::GetNumberOfCreditsString)
        .def("GetCreditString", &UReceivedCreditsMessage::GetCreditString)
        .def("ClientCreditReceive", &UReceivedCreditsMessage::ClientCreditReceive)
          ;
}