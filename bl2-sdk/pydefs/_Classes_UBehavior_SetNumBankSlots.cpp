#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetNumBankSlots(py::object m)
{
    py::class_< UBehavior_SetNumBankSlots,  UBehaviorBase   >(m, "UBehavior_SetNumBankSlots")
        .def_readwrite("NewBankSlotCount", &UBehavior_SetNumBankSlots::NewBankSlotCount)
        .def("StaticClass", &UBehavior_SetNumBankSlots::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetNumBankSlots::ApplyBehaviorToContext)
          ;
}