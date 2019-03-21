#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_Trace(py::object m)
{
    py::class_< USeqAct_Trace,  USequenceAction   >(m, "USeqAct_Trace")
        .def_readwrite("TraceExtent", &USeqAct_Trace::TraceExtent)
        .def_readwrite("StartOffset", &USeqAct_Trace::StartOffset)
        .def_readwrite("EndOffset", &USeqAct_Trace::EndOffset)
        .def_readwrite("HitObject", &USeqAct_Trace::HitObject)
        .def_readwrite("Distance", &USeqAct_Trace::Distance)
        .def_readwrite("HitLocation", &USeqAct_Trace::HitLocation)
        .def("StaticClass", &USeqAct_Trace::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_Trace::eventGetObjClassVersion)
          ;
}