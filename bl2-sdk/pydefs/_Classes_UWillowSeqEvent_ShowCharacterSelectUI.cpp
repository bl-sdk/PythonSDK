#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_ShowCharacterSelectUI(py::module &m)
{
    py::class_< UWillowSeqEvent_ShowCharacterSelectUI,  USequenceEvent   >(m, "UWillowSeqEvent_ShowCharacterSelectUI")
		.def_static("StaticClass", &UWillowSeqEvent_ShowCharacterSelectUI::StaticClass, py::return_value_policy::reference)
          ;
}