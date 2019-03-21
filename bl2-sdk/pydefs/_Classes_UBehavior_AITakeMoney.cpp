#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AITakeMoney()
{
    class_< UBehavior_AITakeMoney, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AITakeMoney", no_init)
        .def_readwrite("TakePercent", &UBehavior_AITakeMoney::TakePercent)
        .def_readwrite("GiveTo", &UBehavior_AITakeMoney::GiveTo)
        .def_readwrite("CashItemPool", &UBehavior_AITakeMoney::CashItemPool)
        .def_readwrite("HUDSpecialRemovalFrame", &UBehavior_AITakeMoney::HUDSpecialRemovalFrame)
        .def("StaticClass", &UBehavior_AITakeMoney::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AITakeMoney::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}