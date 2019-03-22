#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControlHandModifier(py::module &m)
{
    py::class_< USkelControlHandModifier,  USkelControlBase   >(m, "USkelControlHandModifier")
        .def_readwrite("HandAnimSeq", &USkelControlHandModifier::HandAnimSeq)
        .def_readwrite("CurrentSequenceName", &USkelControlHandModifier::CurrentSequenceName)
          ;
}