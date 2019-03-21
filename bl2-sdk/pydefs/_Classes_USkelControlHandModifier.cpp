#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControlHandModifier()
{
    py::class_< USkelControlHandModifier,  USkelControlBase   >("USkelControlHandModifier")
        .def_readwrite("HandAnimSeq", &USkelControlHandModifier::HandAnimSeq)
        .def_readwrite("CurrentSequenceName", &USkelControlHandModifier::CurrentSequenceName)
        .def_readonly("UnknownData00", &USkelControlHandModifier::UnknownData00)
        .def("StaticClass", &USkelControlHandModifier::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}