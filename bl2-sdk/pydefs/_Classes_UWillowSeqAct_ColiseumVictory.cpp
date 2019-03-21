#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumVictory()
{
    py::class_< UWillowSeqAct_ColiseumVictory,  USequenceAction   >("UWillowSeqAct_ColiseumVictory")
        .def("StaticClass", &UWillowSeqAct_ColiseumVictory::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_ColiseumVictory::eventActivated)
        .staticmethod("StaticClass")
  ;
}