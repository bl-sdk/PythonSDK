#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ToggleRestrictions()
{
    py::class_< UWillowSeqAct_ToggleRestrictions,  USequenceAction   >("UWillowSeqAct_ToggleRestrictions")
        .def("StaticClass", &UWillowSeqAct_ToggleRestrictions::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}