#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ToggleHUD(py::module &m)
{
    py::class_< USeqAct_ToggleHUD,  USequenceAction   >(m, "USeqAct_ToggleHUD")
        .def("eventGetObjClassVersion", &USeqAct_ToggleHUD::eventGetObjClassVersion)
          ;
}