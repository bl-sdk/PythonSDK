#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_ShowCharacterSelectUI(py::object m)
{
    py::class_< UWillowSeqEvent_ShowCharacterSelectUI,  USequenceEvent   >(m, "UWillowSeqEvent_ShowCharacterSelectUI")
        .def("StaticClass", &UWillowSeqEvent_ShowCharacterSelectUI::StaticClass, py::return_value_policy::reference)
          ;
}