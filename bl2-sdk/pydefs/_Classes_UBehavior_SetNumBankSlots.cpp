#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetNumBankSlots()
{
    class_< UBehavior_SetNumBankSlots, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetNumBankSlots", no_init)
        .def_readwrite("NewBankSlotCount", &UBehavior_SetNumBankSlots::NewBankSlotCount)
        .def("StaticClass", &UBehavior_SetNumBankSlots::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetNumBankSlots::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}