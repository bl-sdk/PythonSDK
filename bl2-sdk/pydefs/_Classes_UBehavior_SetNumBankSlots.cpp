#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetNumBankSlots(py::module &m)
{
    py::class_< UBehavior_SetNumBankSlots,  UBehaviorBase   >(m, "UBehavior_SetNumBankSlots")
		.def_static("StaticClass", &UBehavior_SetNumBankSlots::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NewBankSlotCount", &UBehavior_SetNumBankSlots::NewBankSlotCount)
        .def("ApplyBehaviorToContext", &UBehavior_SetNumBankSlots::ApplyBehaviorToContext)
          ;
}