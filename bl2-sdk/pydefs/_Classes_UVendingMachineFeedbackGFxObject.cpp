#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVendingMachineFeedbackGFxObject()
{
    class_< UVendingMachineFeedbackGFxObject, bases< UGFxObject >  , boost::noncopyable>("UVendingMachineFeedbackGFxObject", no_init)
        .def_readwrite("PurchasedLabel", &UVendingMachineFeedbackGFxObject::PurchasedLabel)
        .def_readwrite("SoldLabel", &UVendingMachineFeedbackGFxObject::SoldLabel)
        .def_readwrite("InsufficientFundsLabel", &UVendingMachineFeedbackGFxObject::InsufficientFundsLabel)
        .def_readwrite("FullLabel", &UVendingMachineFeedbackGFxObject::FullLabel)
        .def("StaticClass", &UVendingMachineFeedbackGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("Trigger", &UVendingMachineFeedbackGFxObject::Trigger)
        .def("TriggerCannotCarryOrUse", &UVendingMachineFeedbackGFxObject::TriggerCannotCarryOrUse)
        .def("TriggerCannotAfford", &UVendingMachineFeedbackGFxObject::TriggerCannotAfford)
        .def("TriggerSold", &UVendingMachineFeedbackGFxObject::TriggerSold)
        .def("TriggerPurchased", &UVendingMachineFeedbackGFxObject::TriggerPurchased)
        .staticmethod("StaticClass")
  ;
}