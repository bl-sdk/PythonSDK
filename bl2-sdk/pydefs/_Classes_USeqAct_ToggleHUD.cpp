#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ToggleHUD()
{
    py::class_< USeqAct_ToggleHUD,  USequenceAction   >("USeqAct_ToggleHUD")
        .def("StaticClass", &USeqAct_ToggleHUD::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_ToggleHUD::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}