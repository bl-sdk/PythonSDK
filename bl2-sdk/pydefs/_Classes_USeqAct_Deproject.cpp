#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_Deproject()
{
    py::class_< USeqAct_Deproject,  USequenceAction   >("USeqAct_Deproject")
        .def_readwrite("ScreenX", &USeqAct_Deproject::ScreenX)
        .def_readwrite("ScreenY", &USeqAct_Deproject::ScreenY)
        .def_readwrite("TraceDistance", &USeqAct_Deproject::TraceDistance)
        .def_readwrite("HitObject", &USeqAct_Deproject::HitObject)
        .def_readwrite("HitLocation", &USeqAct_Deproject::HitLocation)
        .def_readwrite("HitNormal", &USeqAct_Deproject::HitNormal)
        .def("StaticClass", &USeqAct_Deproject::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}