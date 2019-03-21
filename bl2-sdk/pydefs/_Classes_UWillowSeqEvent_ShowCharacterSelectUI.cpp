#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_ShowCharacterSelectUI()
{
    py::class_< UWillowSeqEvent_ShowCharacterSelectUI,  USequenceEvent   >("UWillowSeqEvent_ShowCharacterSelectUI")
        .def("StaticClass", &UWillowSeqEvent_ShowCharacterSelectUI::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}