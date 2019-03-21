#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControlHandModifier(py::object m)
{
    py::class_< USkelControlHandModifier,  USkelControlBase   >(m, "USkelControlHandModifier")
        .def_readwrite("HandAnimSeq", &USkelControlHandModifier::HandAnimSeq)
        .def_readwrite("CurrentSequenceName", &USkelControlHandModifier::CurrentSequenceName)
        .def("StaticClass", &USkelControlHandModifier::StaticClass, py::return_value_policy::reference)
          ;
}