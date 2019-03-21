#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_DiscardInventory()
{
    py::class_< USeqAct_DiscardInventory,  USequenceAction   >("USeqAct_DiscardInventory")
        .def("StaticClass", &USeqAct_DiscardInventory::StaticClass, py::return_value_policy::reference)
        .def("eventOnActivated", &USeqAct_DiscardInventory::eventOnActivated)
        .staticmethod("StaticClass")
  ;
}